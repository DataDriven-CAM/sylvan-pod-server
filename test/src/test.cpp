#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <iostream>

TEST_CASE("test serving of json graph"){

  /*httplib::Server svr;
  
  svr.set_mount_point("/", "../public");
  svr.set_file_extension_and_mimetype_mapping("json", "application/vnd.jgf+json");

  svr.Get("/hi", [](const httplib::Request& req, httplib::Response& res) {
    res.set_content("Hello World!", "text/plain");
  });

  svr.Get(R"(/numbers/(\d+))", [&](const httplib::Request& req, httplib::Response& res) {
    auto numbers = req.matches[1];
    res.set_content(numbers, "text/plain");
  });

  svr.Get("/body-header-param", [](const httplib::Request& req, httplib::Response& res) {
    if (req.has_header("Content-Length")) {
      auto val = req.get_header_value("Content-Length");
    }
    if (req.has_param("key")) {
      auto val = req.get_param_value("key");
    }
    res.set_content(req.body, "text/plain");
  });

  svr.Get("/stop", [&](const httplib::Request& req, httplib::Response& res) {
    svr.stop();
  });

  svr.listen("localhost", 8080);*/

}