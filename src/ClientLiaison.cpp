

#include "ClientLiaison.h"
#include "RESTransfer.h"

#include <string>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <regex>

 namespace sylvanmats{

    void ClientLiaison::operator()()
    {
        startedRead=false;
        //while(SSL_pending(ssl)==0){std::this_thread::sleep_for(200ms);};
        std::stringstream ss;
        do{
//            std::cout<<"RecvPacket "<<std::endl;
        }while(RecvPacket(ss)>0);

        std::string content=ss.str();
        size_t index=content.find("\r\n\r\n");
        if(index==std::string::npos)index=content.size();
        input=std::make_shared<antlr4::ANTLRInputStream>(content.substr(0, index));
        lexer=std::make_shared<sylvanmats::HTTPLexer>(input.get());
        tokens=std::make_shared<antlr4::CommonTokenStream>(lexer.get());

        parser=std::make_shared<sylvanmats::HTTPParser>(tokens.get());
        //parser->setBuildParseTree(true);
        tree = parser->http_message();
        size_t errorCount=parser->getNumberOfSyntaxErrors();
        if(errorCount>0){
            std::string reply(" 400 Not Found\n");
            SSL_write(ssl.load(), reply.c_str(), reply.size());
            std::ofstream logOfs("server.log", std::ofstream::app);
            logOfs<<content<<std::endl;
            logOfs.close();
            std::cout<<content<<std::endl;
            return;
        }
        

//        std::cout << tree->toStringTree(parser.get()) << std::endl << std::endl;
        sylvanmats::HTTPParser::Http_messageContext* httpProlog=dynamic_cast<sylvanmats::HTTPParser::Http_messageContext*>(tree);
//        std::string method = httpProlog->start_line()->request_line()->method()->getText();
        const std::string thePath="/http_message";
        xPath=std::make_shared<antlr4::tree::xpath::XPath>(parser.get(), thePath);
        dataBlock=xPath->evaluate(tree);
        content=content.substr(index+4);
//        std::cout<<"header_field size: "<<httpProlog->header_field().size()<<std::endl;
        
        sylvanmats::http::Request req{.httpMessage = httpProlog, .content = content};
        sylvanmats::http::Response res{.client = client, .ssl = ssl.load(), .http_version = httpProlog->start_line()->request_line()->http_version()->getText(),
                                        .contentType = mimetypes.lookup(std::string_view(httpProlog->start_line()->request_line()->request_target()->getText()))
                                    };
        handle(&req, &res);
//        std::cout<<req.getMethod()<<" "<<index<<" "<<res.contentType<<" "<<req.yielding()<<std::endl;
        sylvanmats::RESTransfer transfer("./public");
        transfer(&req, &res);
        if(ssl.load()!=nullptr){
           SSL_shutdown(ssl.load());
            SSL_free(ssl.load());
            ssl.store(nullptr);
        }
        
    };

}