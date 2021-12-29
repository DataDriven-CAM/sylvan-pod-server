#pragma once

#include <tuple>

namespace sylvanmats::http{
    struct Response{
        int client;
        SSL *ssl;
        std::string http_version;
        std::string_view contentType;
        void appendHeader(std::string_view name, std::string_view value){
            headers.push_back(std::make_tuple(name, value));            
        };
        void setStatus(std::string status){this->status=status;};
        void conclude(std::string conclusion){
            std::string reply(http_version+" "+status+"\n");
            for(auto& h : headers){
                reply+=std::get<0>(h);
                reply+=": ";
                reply+=std::get<1>(h);
                reply+="\n";
            }
            reply+="Content-Type: ";
            reply+=contentType;
            reply+="\n";
            reply+="Content-Length: "+std::to_string(conclusion.size()+3)+"\n\r\n\r\n"+conclusion+"\n";
            if(reply.size()>0){
                int ret=SSL_write(ssl, reply.c_str(), reply.size());
                bool abandon=false;
                while(ret<=0 && !abandon){
                    switch(SSL_get_error(ssl, ret)){
                        case SSL_ERROR_WANT_READ:
                        case SSL_ERROR_WANT_WRITE:
                            ret=SSL_write(ssl, reply.c_str(), reply.size());
                            break;
                        default:
                            std::cout<<"write failed: "<<ret<<" "<<SSL_get_error(ssl, ret)<<std::endl;
                            abandon=true;
                            break;
                    }
                }
//                std::cout<<"last wrote: "<<ret<<std::endl;
            }
        };
        std::string status="200 OK";
        std::vector<std::tuple<std::string_view, std::string_view>> headers;
    };
}
