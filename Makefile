
all: LDFLAGS= -L./cpp_modules/zlib/dist/lib -L./cpp_modules/urlcpp -L./cpp_modules/openssl/openssl/lib64 -L./cpp_modules/antlr4/runtime/Cpp/run/usr/local/lib -lantlr4-runtime -lz -ldl -pthread -lurlcpp -lssl -lcrypto
all: build/src/parsing/HTTPLexer.o build/src/parsing/HTTPParser.o build/src/RESTransfer.o build/src/Liaison.o build/src/ClientLiaison.o main
	$(CXX) $(LDFLAGS) -o main $(wildcard build/src/*.o) $(wildcard build/src/parsing/*.o) 


build/src/parsing/HTTPLexer.o: CXXFLAGS= -DNDEBUG -O3 -fPIC -pthread -std=c++17 -Iinclude -Isrc -Icpp_modules/zlib/dist/include -I./cpp_modules/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -MMD
build/src/parsing/HTTPLexer.o: src/parsing/HTTPLexer.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/parsing/HTTPLexer.o src/parsing/HTTPLexer.cpp

build/src/parsing/HTTPParser.o: CXXFLAGS= -DNDEBUG -O3 -fPIC -pthread -std=c++17 -Iinclude -Isrc -Icpp_modules/zlib/dist/include -I./cpp_modules/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -MMD
build/src/parsing/HTTPParser.o: src/parsing/HTTPParser.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/parsing/HTTPParser.o src/parsing/HTTPParser.cpp

build/src/RESTransfer.o: CXXFLAGS= -DNDEBUG -O3 -fPIC -pthread -std=c++2a -Iinclude -Isrc  -I./cpp_modules/rapidjson/include -I./cpp_modules/cxx-mime-types/include -I./cpp_modules/cxx-vhost/include -I./cpp_modules/openssl/openssl/include -Icpp_modules/zlib/dist/include -I./cpp_modules/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -MMD
build/src/RESTransfer.o: src/RESTransfer.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/RESTransfer.o src/RESTransfer.cpp

build/src/Liaison.o: CXXFLAGS= -DNDEBUG -O3 -fPIC -pthread -std=c++2a -Iinclude -Isrc  -I./cpp_modules/rapidjson/include -I./cpp_modules/cxx-mime-types/include -I./cpp_modules/cxx-vhost/include -I./cpp_modules/openssl/openssl/include -Icpp_modules/zlib/dist/include -I./cpp_modules/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -MMD
build/src/Liaison.o: src/Liaison.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/Liaison.o src/Liaison.cpp

build/src/ClientLiaison.o: CXXFLAGS= -DNDEBUG -O3 -fPIC -pthread -std=c++2a -Iinclude -Isrc -I./cpp_modules/rapidjson/include -I./cpp_modules/cxx-mime-types/include -I./cpp_modules/cxx-vhost/include -I./cpp_modules/openssl/openssl/include -Icpp_modules/zlib/dist/include -I./cpp_modules/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -MMD
build/src/ClientLiaison.o: src/ClientLiaison.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/ClientLiaison.o src/ClientLiaison.cpp

main: build/src/ClientLiaison.o

main: CXXFLAGS= -O3 -pthread -std=c++2a -I./include -I./cpp_modules/CLI11/include -I./cpp_modules/rapidjson/include -I./cpp_modules/cxx-mime-types/include -I./cpp_modules/cxx-vhost/include -I./src -I./cpp_modules/urlcpp -I./cpp_modules/openssl/openssl/include -I./cpp_modules/zlib/dist/include -I./cpp_modules/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime

main: LDFLAGS= 

main: src/main.cpp
	$(CXX) $(CXXFLAGS) -c -o build/src/main.o src/main.cpp

clean:
	cd cpp_modules/zlib && $(MAKE) clean
	cd cpp_modules/openssl && $(MAKE) clean

