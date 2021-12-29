#pragma once

#include <iostream>

#include "Liaison.h"

#include "antlr4-runtime.h"
#include "parsing/HTTPLexer.h"
#include "parsing/HTTPParser.h"

namespace sylvanmats{
    class ClientLiaison : public Liaison {
        protected:
            using Liaison::mimetypes;
            using Liaison::client;
            using Liaison::ssl;
            using Liaison::useHandlers;
            using Liaison::handle;

        std::shared_ptr<antlr4::ANTLRInputStream> input;
        std::shared_ptr<sylvanmats::HTTPLexer> lexer;
        std::shared_ptr<antlr4::CommonTokenStream> tokens;
        std::shared_ptr<sylvanmats::HTTPParser> parser;
        std::shared_ptr<antlr4::tree::xpath::XPath> xPath;
        antlr4::tree::ParseTree* tree;
        std::vector<antlr4::tree::ParseTree*> dataBlock;

        public:
            using Liaison::use;

        public:
        ClientLiaison(pmc::mimetypes& mimetypes, int client,  std::atomic<SSL*>& ssl) : Liaison(mimetypes, client, ssl) {};
        ClientLiaison(const ClientLiaison* orig) =  delete;
        virtual ~ClientLiaison() = default;

        void operator()();
    };
}
