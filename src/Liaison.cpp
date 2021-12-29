
#include "Liaison.h"

#include <openssl/ssl.h>
#include <openssl/err.h>

 namespace sylvanmats{

    Liaison::~Liaison(){
        /*if(ssl.load()!=nullptr){
            std::cout<<"~Liaison ssl: "<<ssl.load()<<" "<<(counter++)<<std::endl;
           SSL_shutdown(ssl.load());
            SSL_free(ssl.load());
            ssl.store(nullptr);
        }*/
    };
     
     void Liaison::use(sylvanmats::vhost<true> vhost){
         useHandlers.push_back(vhost);
     }

    int Liaison::RecvPacket(std::stringstream& ss)
    {
        int len=100;
        do {
            //cppcoro::generator<std::pair<int, char *>> rs = read();
            std::vector<std::tuple<int, char *>>&& rs = read();
            for(auto it=rs.begin();it !=rs.end();it++){
                len=std::get<0>(*it);
                if(len>0){buf[len]=0;ss<<std::get<1>(*it);}
            }
//            std::cout<<"doing "<<len<<std::endl;
        } while (len>0);
        if (len < 0) {
            int err = SSL_get_error(ssl.load(), len);
        if (err == SSL_ERROR_WANT_READ)
                return 0;
            if (err == SSL_ERROR_WANT_WRITE)
                return 0;
            if (err == SSL_ERROR_ZERO_RETURN || err == SSL_ERROR_SYSCALL || err == SSL_ERROR_SSL)
                return -1;
        }
        return 0;
    };

    /*cppcoro::generator<std::pair<int, char *>> read(){
        int len=1000;
            //len=SSL_read(ssl, buf, 100);
            //if(len>=0)buf[len]=0;
            //printf("%s",buf);
            //fprintf(fp, "%s",buf);
            std::cout<<"SSL_read "<<len<<std::endl;
        co_yield std::make_pair(SSL_read(ssl, buf, len), buf);
    }*/

    std::vector<std::tuple<int, char *>> Liaison::read(){
        int len=1000;
            //len=SSL_read(ssl, buf, 100);
            //if(len>=0)buf[len]=0;
            //printf("%s",buf);
            //fprintf(fp, "%s",buf);
//            std::cout<<"SSL_read "<<len<<std::endl;
            std::vector<std::tuple<int, char *>> ret;
            if(!startedRead || SSL_has_pending(ssl.load())>0){
                int r=SSL_read(ssl.load(), buf, len);
                bool abandon=false;
                while(r<=0 && !abandon){
                    switch(SSL_get_error(ssl.load(), r)){
                        case SSL_ERROR_WANT_READ:
                        case SSL_ERROR_WANT_WRITE:
                            r=SSL_read(ssl.load(), buf, len);
                            break;
                        default:
                            std::cout<<"read failed: "<<r<<" "<<SSL_get_error(ssl.load(), r)<<std::endl;
                            abandon=true;
                            break;
                    }
                }
//                std::cout<<"last read: "<<r<<" "<<std::endl;
                ret.push_back(std::tuple<int, char *>(r, buf));
                startedRead=true;
            }
            else ret.push_back(std::tuple<int, char *>(0, buf));
        return ret;
    }

    void Liaison::handle(sylvanmats::http::Request *req, sylvanmats::http::Response *res){
        for(sylvanmats::vhost<true>& u : useHandlers)u(req, res);
    }
}
