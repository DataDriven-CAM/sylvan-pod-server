#include <stdio.h>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <numeric>
#include <future>
#include <string>
#include <string_view>

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h> 

namespace pmc{

    template <bool ssl>
    struct cors{
        std::string originTag = "Origin";
        std::string Origin{"https://localhost:8888"};
        std::string Access_Control_Allow_Origin{"*"};
        std::string Access_Control_Allow_Methods{"GET,HEAD,PUT,POST,DELETE,PATCH"};
        void operator()(sylvanmats::http::Request *req, sylvanmats::http::Response *res) {
            
            if(req->getMethod().compare("OPTIONS")==0 || req->getMethod().compare("options")==0){
                res->appendHeader(std::string_view("Access-Control-Allow-Methods"), std::string_view(Access_Control_Allow_Methods));
                res->appendHeader(std::string_view("Content-Type"), std::string_view("text/plain"));
                req->yield(false);
                res->setStatus("204 No Content");
            }
            //res->writeHeader(std::string_view(originTag), std::string_view(Origin));
            for(unsigned int headerIndex=0;headerIndex<req->httpMessage->header_field().size();headerIndex++){
            //std::cout<<"\t"<<req->httpMessage->header_field(headerIndex)->field_name()->getText()<<" "<<req->httpMessage->header_field(headerIndex)->field_value(0)->getText()<<std::endl;
                if(req->httpMessage->header_field(headerIndex)->field_name()->getText().compare("Origin")==0 || req->httpMessage->header_field(headerIndex)->field_name()->getText().compare("origin")==0){
                    if(Access_Control_Allow_Origin.compare("*")==0 || Access_Control_Allow_Origin.compare(req->httpMessage->header_field(headerIndex)->field_value(0)->getText())==0)
                        res->appendHeader(std::string_view("Access-Control-Allow-Origin"), std::string_view(Access_Control_Allow_Origin));
                    else req->yield(false);
                }
                //else if(req->httpMessage->header_field(headerIndex)->field_name()->getText().compare("Origin")==0)
            }
            //std::cout<<req->getYield()<<" cors "<<req->getUrl()<<" "<<req->getMethod()<<std::endl;
            if(!req->yielding())res->conclude("fogetaboutit");
        };
    };

}

