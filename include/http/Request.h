#pragma once

#include "parsing/HTTPParser.h"

namespace sylvanmats::http{
    struct Request{
        sylvanmats::HTTPParser::Http_messageContext* httpMessage;
        std::string content;
        std::string getMethod() const{return httpMessage->start_line()->request_line()->method()->getText();};
        void yield(bool y){this->y=y;};
        bool yielding(){return y;};
        bool y=true;
        std::string clientHost="";
    };
}

