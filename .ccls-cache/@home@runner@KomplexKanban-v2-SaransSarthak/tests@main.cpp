/*

  Compile with: g++ main.cpp ../src/fac.cpp catch_amalgamated
  Runn with ./a.out

*/

//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include <iostream>
#include "catch_amalgamated.hpp"
#include "../src/fac.h"
#include "../include/Complex.h"
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN
int main( int argc, char* argv[] ) {
  // global setup...

  int result = Catch::Session().run( argc, argv );

  // global clean-up...
    cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else    //Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test on Factorial", "[Factorial]")
{

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex" << endl;
  // REQUIRE(Factorial(1) == 1);
  // REQUIRE(Factorial(2) == 2);
  // REQUIRE(Factorial(3) == 6);
  // REQUIRE(Factorial(4) == 24);
  // REQUIRE(Factorial(5) == 120);
  Complex a(5,12);
	Complex b(3, 4);
  REQUIRE(a.abs(a)==13.0);
	REQUIRE(b.abs(b)==5.0);

	
	REQUIRE(((a + b).im == 16));
	REQUIRE(((a + b).re == 8));
	REQUIRE(((a - b).im == 8));
	REQUIRE(((a - b).re == 2));
	REQUIRE(((a * b).re == -33));
	REQUIRE(((a * b).im == 56));
	REQUIRE(((a / b).re == 63.0/25));
	REQUIRE(((a / b).im == 16.0/25));
	cout<<a.cosb(a).im<<endl;
	REQUIRE(((a.cosb(a).re == 23083.69) ));
	cout<<a.cosb(a).im<<endl;
		REQUIRE(((a.cosb(a).im == 78034.76) ));


	Complex c(-5,12);
	Complex d(-3, 4);
  REQUIRE(a.abs(a)==13.0);
	REQUIRE(b.abs(b)==5.0);

	
	REQUIRE(((c + d).im == 16));
	REQUIRE(((c + d).re == -8));
	REQUIRE(((c - d).im == 8));
	REQUIRE(((c - d).re == -2));
	REQUIRE(((c * d).re == -33));
	REQUIRE(((c * d).im == -56));
	REQUIRE(((c / d).re == 63.0/25));
	REQUIRE(((c / d).im == -16.0/25));
	REQUIRE(c.arg(c)==-67.38);
}
// */
#endif  //ifndef CATCH_AMALGAMATED_CUSTOM_MAIN


// SHELL = /bin/sh

// all: main

// CXX = clang++
// override CXXFLAGS += -g -Wno-everything

// SRCS := $(wildcard src/*.cpp)
// SRCS := $(filter-out catch_amalgamated.cpp, $(SRCS))
// TESTS := $(wildcard *.cpp)
// TESTS := $(filter-out catch_amalgamated.cpp, $(TESTS))
// HEADERS := $(wildcard *.h*)
// HEADERS := $(filter-out catch_amalgamated.hpp, $(HEADERS))

// main: $(TESTS) ../src/fac.cpp ../src/fac.h $(HEADERS)
// 	$(CXX) $(CXXFLAGS) $(TESTS) ../src/fac.cpp catch_amalgamated -o "$@"

// main-debug: $(SRCS) $(HEADERS)
// 	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

// catch_amalgamated: catch_amalgamated.cpp catch_amalgamated.hpp
// 	$(CXX) $(CXXFLAGS) -O0 -c catch_amalgamated.cpp -o "$@"

// clean:
// 	rm -f main main-debug