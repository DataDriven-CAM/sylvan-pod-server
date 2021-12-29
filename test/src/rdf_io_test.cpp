#include <doctest/doctest.h>

#include <fstream>
#include <string>
#include <string_view>
#include <sstream>
#include <regex>
#include <iterator>
#include <numbers>
#include <ranges>

#include "publishing/st/RDFPublisher.h"

TEST_CASE("test publishing rdf format"){

        std::filesystem::path path="../templates/rdf";
        sylvanmats::publishing::st::RDFPublisher rdfPublisher(path);

        std::string containerType("Basic");
        rdfPublisher.add("container-type", containerType);
        rdfPublisher.add("file-or-directory", "src");
        rdfPublisher.add("mtime", "10:10:00");
        std::string&& content2 = rdfPublisher.render();
        std::cout<<" "<<content2<<std::endl;
        //std::ofstream ofs2("../../server/public/molecule.obj");
        //ofs2<<content2<<std::endl;
    
}