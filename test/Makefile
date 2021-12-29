
all: LDFLAGS= -L../../cifio -L$(JAVA_HOME)/lib -L$(JAVA_HOME)/lib/server -L$(LUA_HOME)/install/lib -L../cpp_modules/zlib/dist/lib -L../cpp_modules/openssl/openssl/lib64 -L../../antlr4/runtime/Cpp/run/usr/local/lib -lantlr4-runtime -lcifio -llua -ljvm -lz -ldl -pthread -lssl -lcrypto
all: build/src/publishing/st/RDFPublisher.o build/src/publishing/st/TTLPublisher.o build/src/rdf_io_test.o build/src/coroutines_test.o test
	$(CXX) $(LDFLAGS) -o test $(wildcard build/src/*.o) $(wildcard build/src/publishing/st/*.o) 

build/src/publishing/st/RDFPublisher.o: CXXFLAGS= -DNDEBUG -fPIC -O3 -pthread -std=c++2a -Iinclude -I../include -Isrc -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/linux -I../../cifio/include -I../../lemon-main/dist/include -Icpp_modules/zlib/dist/include -I../antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -MMD
build/src/publishing/st/RDFPublisher.o: ../src/publishing/st/RDFPublisher.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/publishing/st/RDFPublisher.o ../src/publishing/st/RDFPublisher.cpp

build/src/publishing/st/TTLPublisher.o: CXXFLAGS= -DNDEBUG -fPIC -O3 -pthread -std=c++2a -Iinclude -I../include -Isrc -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/linux -I../../cifio/include -I../../lemon-main/dist/include -Icpp_modules/zlib/dist/include -I../antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -MMD
build/src/publishing/st/TTLPublisher.o: ../src/publishing/st/TTLPublisher.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/publishing/st/TTLPublisher.o ../src/publishing/st/TTLPublisher.cpp

build/src/rdf_io_test.o: CXXFLAGS= -DNDEBUG -O3 -pthread -std=c++2a -I../include -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/linux -I../cpp_modules/eigen -I../../cifio/include -I../../cifio/src -I../src -I../../lemon-main/dist/include -I../cpp_modules/zlib/dist/include -I../../antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -I../../cifio/cpp_modules/urlcpp -I../../cifio/cpp_modules/openssl/openssl/include -I../cpp_modules/doctest -MMD
build/src/rdf_io_test.o: src/rdf_io_test.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/rdf_io_test.o src/rdf_io_test.cpp

build/src/coroutines_test.o: CXXFLAGS= -DNDEBUG -O3 -pthread -std=c++2a -I../include -I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/linux -I../cpp_modules/eigen -I../../cifio/include -I../../cifio/src -I../src -I../../lemon-main/dist/include -I../cpp_modules/zlib/dist/include -I../../antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime -I../../cifio/cpp_modules/urlcpp -I../../cifio/cpp_modules/openssl/openssl/include -I../cpp_modules/doctest -MMD
build/src/coroutines_test.o: src/coroutines_test.cpp 
	$(CXX) $(CXXFLAGS) -c -o build/src/coroutines_test.o src/coroutines_test.cpp

test: CXXFLAGS= -O3 -pthread -std=c++2a -I../include -I../src -I../cpp_modules/openssl/openssl/include -I../cpp_modules/zlib/dist/include -I../cpp_modules/doctest  
test: LDFLAGS= 
test: src/test.cpp
	$(CXX) $(CXXFLAGS) -c -o build/src/test.o src/test.cpp

clean:
	cd cpp_modules/zlib && $(MAKE) clean
	cd cpp_modules/openssl && $(MAKE) clean

