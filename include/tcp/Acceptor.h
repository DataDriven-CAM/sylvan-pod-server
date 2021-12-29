#pragma once

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iterator>
#include <filesystem>
#include <functional>
#include <chrono>
#include <thread>
#include <atomic>

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

#include "Exception.h"

#include "asynchronous/Generator.h"

using namespace std::chrono_literals;

namespace sylvanmats::tcp{
    struct socket_accept : std::suspend_always
    {
        int sock;
        mutable int client;
        socket_accept(int sock):std::suspend_always(), sock (sock)  {};
      bool await_suspend(std::coroutine_handle<> handle) const noexcept
      {
            struct sockaddr_in addr;
            uint len = sizeof(addr);
            client = (int)accept(sock, (struct sockaddr*)&addr, &len);
            std::thread([handle]{ handle(); }).detach();
            return true;
      }
        auto await_resume() const noexcept {return client;};
    };

    class Acceptor {
    protected:
        int sock;
        SSL_CTX *ctx;
        //SSL *ssl=nullptr;
        std::atomic<SSL*> ssl;

    public:
        Acceptor(int sock, SSL_CTX *ctx): sock (sock), ctx (ctx) {
            ssl.store(nullptr);
        };
        Acceptor(const Acceptor& orig) = delete;
        virtual ~Acceptor(){if(ssl.load()!=nullptr){SSL_shutdown(ssl.load());SSL_free(ssl.load());}};

    public:
        void operator()(std::function<int(int client, std::atomic<SSL*>& ssl)> apply){
            struct sockaddr_in addr;
            uint len = sizeof(addr);
            //sylanmats::asynchronous::Generator<int> rs=socket_accept(sock);
            do{
            std::vector<int>&& rs = socket_traditional_accept(sock);
            for(auto it=rs.begin();it!=rs.end();it++){
                int client = (*it);//co_await (int)accept(sock, (struct sockaddr*)&addr, &len);
//                    std::cout<<"client "<<client<<std::endl;
                if (client < 0) {
                    std::this_thread::sleep_for(2000ms);
                    break;
                    //throw sylvanmats::Exception("Unable to accept");
                }
                std::atomic<SSL*>ssl;
                ssl.store(SSL_new(ctx));
                SSL_set_fd(ssl.load(), client);

//                    std::cout<<"SSL_accept "<<std::endl;
                if (SSL_accept(ssl.load()) <= 0) {
                    std::cout<<"bad SSL_accept "<<std::endl;
                    ERR_print_errors_fp(stderr);
                    SSL_shutdown(ssl.load());SSL_free(ssl.load());
                }
                else {
                    //std::cout<<"co yield apply "<<std::endl;
                    apply(client, ssl);
                }
                //ssl=nullptr;
                //SSL_shutdown(ssl);SSL_free(ssl);
             }
            }while(true);
            //close(client);
        };

        sylvanmats::asynchronous::Generator<int> socket_accept(int sock){
            struct sockaddr_in addr;
            uint len = sizeof(addr);
            //std::cout<<"looking to accept friendlies "<<std::endl;
            co_yield accept4(sock, (struct sockaddr*)&addr, &len, SOCK_NONBLOCK);
        };

        std::vector<int> socket_traditional_accept(int sock){
            struct sockaddr_in addr;
            uint len = sizeof(addr);
            //std::cout<<"looking to accept friendlies "<<std::endl;
            int fd = accept4(sock, (struct sockaddr*)&addr, &len, 0);
            return {fd};
        };


    };
}
