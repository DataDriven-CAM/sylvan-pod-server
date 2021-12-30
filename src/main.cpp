#include <stdio.h>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <numeric>
#include <future>
#include <string>
#include <mutex>
#include <csignal>
#include <chrono>
#include <thread>

#include "CLI/App.hpp"
#include "CLI/Formatter.hpp"
#include "CLI/Config.hpp"

#include "Server.h"
#include "RESTransfer.h"

#include "cors.h"
#include "ldp.h"

int main(int argc, char** argv){
    try{
    std::string home=std::getenv("HOME");
    std::string sylvanHome=(std::getenv("SYLVAN_HOME")!=NULL) ?std::getenv("SYLVAN_HOME") : ".";
    CLI::App app{"C++ web server"};
    std::string host = "localhost";
    int port = 8080;
    std::string directory1, directory2;
    std::string key_file_name, cert_file_name;
    app.add_flag("--host", host, "The host");
    app.add_option("--port    ,-p", port, "The port");
    app.set_config("--config", sylvanHome+"/config.toml", "Read a toml file");
    app.add_option("module-directory")->group("");
    app.add_option("vhost-directory")->group("");

    CLI11_PARSE(app, argc, argv);
    
    std::string moduleDirectory=(app.count("module-directory"))? app.get_option("module-directory")->as<std::string>(): "cpp_modules";
    std::string vhostDirectory=(app.count("vhost-directory"))? app.get_option("vhost-directory")->as<std::string>(): "./data";
    //app.get_config_ptr()->
    pmc::mimetypes mimetypes("./"+moduleDirectory+"/mime-db/db.json");
    sylvanmats::Server server(mimetypes, host, port);
    server([&vhostDirectory, &mimetypes, &host, &port](sylvanmats::ClientLiaison& liaison){
        pmc::ldp<true> ldp;
        pmc::cors<true> cors{.Origin = "https://"+host+":"+std::to_string(port)};
        sylvanmats::vhost<true> vhost{.hostname = "*."+host,
                               .handle = [&vhostDirectory, &mimetypes, &ldp, &cors](sylvanmats::http::Request *req, sylvanmats::http::Response *res){
                                    cors(req, res);
                                    ldp(req, res);
                                    sylvanmats::RESTransfer transfer(vhostDirectory+"/"+req->clientHost+"/public");
                                    transfer(req, res);
                               }};
        liaison.use(std::move(vhost));
    });
    std::cout << "Failed to listen to port " << port << std::endl;
    }
    catch(std::exception& ex){
    std::cout << "Fail " << ex.what() << std::endl;
        
    }
  return 0;
}

