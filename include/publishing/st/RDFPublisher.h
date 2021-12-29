#pragma once

#include "publishing/st/Publisher.h"


namespace sylvanmats::publishing::st{
    class RDFPublisher : public Publisher {
    protected:
        using Publisher::jniEnv;
        using Publisher::jcls;
        using Publisher::jshortcls;
        using Publisher::jintcls;
        using Publisher::jlongcls;
        using Publisher::jdoublecls;
        using Publisher::stObject;
    public:
        using Publisher::add;

    public:
        RDFPublisher(std::filesystem::path& stPath);
        RDFPublisher(const RDFPublisher& orig) = delete;
        virtual ~RDFPublisher() =  default;

        protected:


    };
}


