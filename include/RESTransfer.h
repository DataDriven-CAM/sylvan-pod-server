#pragma once

#include <string>

#include <openssl/ssl.h>
#include <openssl/err.h>

#include "http/Request.h"
#include "http/Response.h"

namespace sylvanmats{ 
    class RESTransfer{
    protected:
        std::string locationPath=".";
    public:
        RESTransfer(std::string locationPath): locationPath (locationPath) {};
        RESTransfer(const RESTransfer& orig) = delete;
        virtual ~RESTransfer() =  default;
        
        void operator()(sylvanmats::http::Request *req, sylvanmats::http::Response *res);
    };
}
