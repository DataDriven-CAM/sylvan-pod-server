#pragma once

#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iterator>
#include <filesystem>
#include <functional>

#include <openssl/ssl.h>
#include <openssl/err.h>

#include "http/Request.h"
#include "http/Response.h"

#include "mime_types.h"
#include "vhost.h"

namespace sylvanmats{
    class Liaison{
        protected:
        pmc::mimetypes& mimetypes;
        int client;
        std::atomic<SSL*>& ssl;

        char buf[1'000'000];
        bool startedRead=false;
        std::vector<sylvanmats::vhost<true>> useHandlers;

        public:
        Liaison(pmc::mimetypes& mimetypes, int client, std::atomic<SSL*>& ssl) : mimetypes (mimetypes), client (client), ssl (ssl) {};
        Liaison(const Liaison* orig) =  delete;
        virtual ~Liaison();

        virtual void operator()() = 0;
        
        void use(sylvanmats::vhost<true> vhost);

        protected:
        int RecvPacket(std::stringstream& ss);
        std::vector<std::tuple<int, char *>> read();
        void handle(sylvanmats::http::Request *req, sylvanmats::http::Response *res);
    };
}

