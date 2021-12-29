#include <stdio.h>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <numeric>
#include <future>
#include <string>

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h> 

namespace pmc{

struct cors_options {
};

template <bool SSL>
struct cors : public uWS::TemplatedApp<SSL>::WebSocketBehavior{
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::compression;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::maxPayloadLength;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::idleTimeout;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::open;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::message;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::drain;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::ping;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::pong;
    using uWS::TemplatedApp<SSL>::WebSocketBehavior::close;
    cors(){
        compression = uWS::SHARED_COMPRESSOR;
        maxPayloadLength = 16 * 1024 * 1024;
        idleTimeout = 10;
        open = [](auto *ws, auto *req) {
            std::cout<<"in cors open"<<std::endl;
            //ws->subscribe("broadcast");
            std::cout<<req->getMethod()<<std::endl;
          };
        message = [](auto *ws, std::string_view message, uWS::OpCode opCode) {
            ws->send(message, opCode);
        };
        drain = [](auto *ws) {
            /* Check getBufferedAmount here */
        };
        ping = [](auto *ws) {

        };
        pong = [](auto *ws) {

        };
        close = [](auto *ws, int code, std::string_view message) {

    };
    };
};

}
