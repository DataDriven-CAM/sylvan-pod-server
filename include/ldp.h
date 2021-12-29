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

    struct ldp_options {
    };

    template <bool SSL>
    class ldp{
    public:
        ldp() = default;
        ldp(const ldp& orig) = delete;
        virtual ~ldp() = default;
        sylvanmats::http::Response *operator()(sylvanmats::http::Request *req, sylvanmats::http::Response *res) {

            return res;
        };
    };

}
