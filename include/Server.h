#pragma once

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iterator>
#include <filesystem>
#include <functional>
#include <thread>
#include <chrono>

#include "Url.h"

#include <coroutine>
#include <stdexcept>

#ifdef __WIN32__
# include <winsock2.h>
#else
#include <sys/socket.h>
#include <arpa/inet.h>
#endif
#include <openssl/ssl.h>
#include <openssl/err.h>

#include "tcp/Acceptor.h"
#include "ClientLiaison.h"

namespace sylvanmats{
    class Server{
    protected:
        pmc::mimetypes& mimetypes;
        std::string host = "localhost";
        int port = 8080;
        int sock;
        SSL_CTX *ctx;
    public:
        Server(pmc::mimetypes& mimetypes, std::string host = "localhost", int port=8080) : mimetypes (mimetypes), host (host), port (port){
            init_openssl();
            ctx = create_context();

            configure_context(ctx);

            sock = create_socket(port);
            //set_timeout(sock, 10000);
            std::cout<<"Serving on https://"<<host<<":"<<port<<"/"<<std::endl;
        };
        Server(const Server& orig) = delete;
        virtual ~Server(){
            //close(sock);
            SSL_CTX_free(ctx);
            cleanup_openssl();
        };
    public:
    void operator()(std::function<void(sylvanmats::ClientLiaison& liaison)> serve){
        try{
            sylvanmats::tcp::Acceptor acceptor(sock, ctx);
            do{
                acceptor([&](int client, std::atomic<SSL*>& ssl){
                    sylvanmats::ClientLiaison clientLiaison(mimetypes, client, ssl);
                    serve(clientLiaison);
                    
                    std::jthread t(std::move(clientLiaison));
                    //t.detach();
                    //std::this_thread::sleep_for(std::chrono::seconds(5));
                    return client;
                });
            }while(true);
//            std::cout<<"beyond accept "<<std::endl;
        }
        catch(sylvanmats::Exception& ex){
            std::cout<<ex.what()<<std::endl;
        }
        catch(std::exception& ex){
            std::cout<<ex.what()<<std::endl;
        }
    };
    protected:
        int create_socket(int port)
        {
            int s;
            struct sockaddr_in addr;

            addr.sin_family = AF_INET;
            addr.sin_port = htons(port);
            addr.sin_addr.s_addr = htonl(INADDR_ANY);

            s = socket(AF_INET, SOCK_STREAM, 0);
            if (s < 0) {
                perror("Unable to create socket");
                exit(EXIT_FAILURE);
            }

            if (bind(s, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
                perror("Unable to bind");
                exit(EXIT_FAILURE);
            }

            if (listen(s, 1) < 0) {
                perror("Unable to listen");
                exit(EXIT_FAILURE);
            }

            return s;
        }

        void init_openssl()
        { 
            SSL_load_error_strings();	
            OpenSSL_add_ssl_algorithms();
        }

        void set_timeout(int sock, int timeout_ms)
        {
            struct timeval interval = {timeout_ms / 1000, (timeout_ms % 1000) * 1000};
            if (interval.tv_sec < 0 || (interval.tv_sec == 0 && interval.tv_usec <= 0))
            {
                interval.tv_sec = 0;
                interval.tv_usec = 100;
            }

            setsockopt(sock, SOL_SOCKET, SO_RCVTIMEO, (char *)&interval, sizeof(struct timeval));
        }

        void cleanup_openssl()
        {
            EVP_cleanup();
        }

        SSL_CTX *create_context()
        {
            const SSL_METHOD *method;
            SSL_CTX *ctx;

            method = TLS_server_method();

            ctx = SSL_CTX_new(method);
            if (!ctx) {
                perror("Unable to create SSL context");
                ERR_print_errors_fp(stderr);
                exit(EXIT_FAILURE);
            }

            return ctx;
        }

        void configure_context(SSL_CTX *ctx)
        {
            SSL_CTX_set_ecdh_auto(ctx, 1);

            /* Set the key and cert */
            if (SSL_CTX_use_certificate_file(ctx, "../cert.pem", SSL_FILETYPE_PEM) <= 0) {
                ERR_print_errors_fp(stderr);
                exit(EXIT_FAILURE);
            }

            if (SSL_CTX_use_PrivateKey_file(ctx, "../key.pem", SSL_FILETYPE_PEM) <= 0 ) {
                ERR_print_errors_fp(stderr);
                exit(EXIT_FAILURE);
            }
        }

    };
}