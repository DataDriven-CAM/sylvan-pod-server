#pragma once

#include "publishing/st/Publisher.h"


namespace sylvanmats::publishing::st{
    class TTLPublisher : public Publisher {
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
        TTLPublisher(std::filesystem::path& stPath);
        TTLPublisher(const TTLPublisher& orig) = delete;
        virtual ~TTLPublisher() =  default;

        protected:


    };
}



