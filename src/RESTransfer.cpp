#include <string>
#include <iostream>
#include <filesystem>

#include "RESTransfer.h"

namespace sylvanmats{

    void RESTransfer::operator()(sylvanmats::http::Request *req, sylvanmats::http::Response *res){
        std::string request_target = req->httpMessage->start_line()->request_line()->request_target()->getText();
        std::string http_version = req->httpMessage->start_line()->request_line()->http_version()->getText();
        if(req->yielding())
            if(req->getMethod().compare("PUT")==0){
                std::filesystem::path path = locationPath+request_target;
                if(!std::filesystem::exists(path)){
                    std::filesystem::create_directories(path.parent_path());
                    std::ofstream ofs(path);
                    ofs<<req->content;
                    ofs.close();
                    res->status=http_version+" 201 Created\n";
                    res->conclude("");
                }
                else {
                    res->status=http_version+" 200 OK\n";
                    res->conclude("");
                }
            }
            else if(req->getMethod().compare("POST")==0){
                std::filesystem::path path = locationPath+request_target;
                if(!std::filesystem::exists(path)){
                    std::filesystem::create_directories(path.parent_path());
                    std::ofstream ofs(path);
                    ofs<<req->content;
                    ofs.close();
                    res->status=http_version+" 201 Created\n";
                    res->conclude("");
                }
                else {
                    res->status=http_version+" 200 OK\n";
                    res->conclude("");
                }
            }
            else if(req->getMethod().compare("GET")==0){
                std::filesystem::path path = locationPath+request_target;
//                std::cout<<"GET "<<path<<std::endl;
                if(std::filesystem::exists(path)){
                    std::ifstream ifs(path);
                    std::string content=std::string((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
                    ifs.close();
                    res->conclude(content);
                }
                else {
                    res->status=http_version+" 404 Not Found\n";
                    res->conclude("");
                }
            }
            else if(req->getMethod().compare("HEAD")==0){
                std::filesystem::path path = locationPath+request_target;
                if(std::filesystem::exists(path)){
                        std::string reply(http_version+" 200 OK\nContent-Length: "+std::to_string(2)+"\n\r\n\r\n");
                        SSL_write(res->ssl, reply.c_str(), reply.size());
                        //SSL_write(ssl, "\n", 1);

                }
                else {
                    std::string reply(http_version+" 404 Not Found\n");
                    SSL_write(res->ssl, reply.c_str(), reply.size());
                }
            }
            else if(req->getMethod().compare("DELETE")==0){
                std::filesystem::path path = locationPath+request_target;
                if(std::filesystem::exists(path)){
                    std::filesystem::remove(path);
                    res->status=http_version+" 200 OK\n";
                    res->conclude("");
                }
                else {
                    res->status=http_version+" 404 Not Found\n";
                    res->conclude("");
                }
            }
        req->yield(false);
    }

}
