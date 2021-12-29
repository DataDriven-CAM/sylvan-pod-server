#include <iterator>
#include <fstream>
#include <iostream>
#include <sstream>
#include "publishing/st/RDFPublisher.h"


namespace sylvanmats::publishing::st{

    RDFPublisher::RDFPublisher(std::filesystem::path& stPath) : Publisher(stPath) {
    };

}

