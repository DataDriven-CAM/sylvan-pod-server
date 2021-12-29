#pragma once

#include <string_view>
#include <exception>

namespace sylvanmats{
    class Exception : public std::exception{
    protected:
        std::string explanation;
    public:
        Exception(std::string explanation) : explanation (explanation){};
    public:
        virtual const char* what(){return explanation.c_str();};
    };
}

