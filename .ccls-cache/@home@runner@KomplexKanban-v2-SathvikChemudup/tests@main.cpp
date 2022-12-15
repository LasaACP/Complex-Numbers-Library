/*

  Compile with: g++ main.cpp ../src/facpp catch_amalgamated
  Runn with ./out

*/

//#define CATCH_CONFIG_RUNNER
//#define CATCH_AMALGAMATED_CUSTOM_MAIN
#include "../include/Complex.h"
// #include "../src/fah"
#include "catch_amalgamated.hpp"
#include <iostream>
using namespace std;

#ifdef CATCH_AMALGAMATED_CUSTOM_MAIN
int main(int argc, char *argv[]) {
  // global setup...

  int result = Catch::Session().run(argc, argv);

  // global clean-up...
  cout << "Hello Catch2 Build with custom main()\n";

  return result;
}

#else  // Not CATCH_AMALGAMATED_CUSTOM_MAIN

TEST_CASE("Quick Catch2 test on Arithmetic Functions", "[Factorial]") {

  cout << "Hello Catch2 Build with Catch2 main()\n";
  cout << "Running tests on Complex" << endl;
  // REQUIRE(Factorial(1) == 1);
  // REQUIRE(Factorial(2) == 2);
  // REQUIRE(Factorial(3) == 6);
  // REQUIRE(Factorial(4) == 24);
  // REQUIRE(Factorial(5) == 120);
  Complex a(5, 12);
  Complex b(3, 4);
  REQUIRE(abs(a) == 13.0);
  REQUIRE(abs(b) == 5.0);
  REQUIRE(((a + b).im == 16));
  REQUIRE(((a + b).re == 8));
  REQUIRE(((a - b).im == 8));
  REQUIRE(((a - b).re == 2));
  REQUIRE(((a * b).re == -33));
  REQUIRE(((a * b).im == 56));
  REQUIRE(((a / b).re == 63.0 / 25));
  REQUIRE(((a / b).im == 16.0 / 25));
  REQUIRE(((cos(a).re == 23083.7)));
  REQUIRE(((cos(a).im == 78034.8)));
  REQUIRE(((sin(a).re == -78034.8)));
  REQUIRE(((sin(a).im == 23083.7)));
  REQUIRE(((sinh(a).re == (62.6))));
  REQUIRE(((sinh(a).im == -39.8)));
  REQUIRE(((cosh(a).re == (62.6))));
  REQUIRE(((cosh(a).im == -39.8)));
  REQUIRE(((tan(a).re == (0))));
  REQUIRE(((tan(a).im == 1)));
  REQUIRE(((tanh(a).re == 1)));
  REQUIRE(((tanh(a).im == 0)));

  // make b
  REQUIRE(((cos(b).re == -27)));
  REQUIRE(((cos(b).im == -3.9)));
  REQUIRE(((sin(b).re == 3.9)));
  REQUIRE(((sin(b).im == -27)));
  REQUIRE(((sinh(b).re == (-6.5))));
  REQUIRE(((sinh(b).im == -7.6)));
  REQUIRE(((cosh(b).re == (-6.6))));
  REQUIRE(((cosh(b).im == -7.6)));
  REQUIRE(((tan(b).re == (0))));
  REQUIRE(((tan(b).im == 1)));
  REQUIRE(((tanh(b).re == 1)));
  REQUIRE(((tanh(b).im == 0)));
  REQUIRE(abs(a) == 13.0);
  REQUIRE(abs(b) == 5.0);
	
  Complex c(-5, 12);
  Complex d(-3, 4);
  REQUIRE(((c + d).im == 16));
  REQUIRE(((c + d).re == -8));
  REQUIRE(((c - d).im == 8));
  REQUIRE(((c - d).re == -2));
  REQUIRE(((c * d).re == -33));
  REQUIRE(((c * d).im == -56));
  REQUIRE(((c / d).re == 63.0 / 25));
  REQUIRE(((c / d).im == -16.0 / 25));
  REQUIRE(arg(c) == -67.38);

  // test c
  REQUIRE(((cos(c).re == 23083.7)));
  REQUIRE(((cos(c).im == -78034.8)));
  REQUIRE(((sin(c).re == 78034.8)));
  REQUIRE(((sin(c).im == 23083.7)));
  REQUIRE(((sinh(c).re == (-62.6))));
  REQUIRE(((sinh(c).im == -39.8)));
  REQUIRE(((cosh(c).re == (62.6))));
  REQUIRE(((cosh(c).im == 39.8)));
  REQUIRE(((tan(c).re == (0))));
  REQUIRE(((tan(c).im == 1)));
  REQUIRE(((tanh(c).re == -1)));
  REQUIRE(((tanh(c).im == 0)));

  // test d
  REQUIRE(((cos(d).re == -27)));
  REQUIRE(((cos(d).im == 3.9)));
  REQUIRE(((sin(d).re == -3.9)));
  REQUIRE(((sin(d).im == -27)));
  REQUIRE(((sinh(d).re == (6.5))));
  REQUIRE(((sinh(d).im == -7.6)));
  REQUIRE(((cosh(d).re == (-6.6))));
  REQUIRE(((cosh(d).im == 7.6)));
  REQUIRE(((tan(d).re == (0))));
  REQUIRE(((tan(d).im == 1)));
  REQUIRE(((tanh(d).re == -1)));
  REQUIRE(((tanh(d).im == 0)));

	
  // test e
  Complex e(-15, -8);
  REQUIRE(((cos(e).re == -1132.3)));
  REQUIRE(((cos(e).im == -969.2)));
  REQUIRE(((sin(e).re == -969.2)));
  REQUIRE(((sin(e).im == 1132.3)));
  REQUIRE(((sinh(e).re == (237821.1))));
  REQUIRE(((sinh(e).im == -1617114.6)));
  REQUIRE(((cosh(e).re == (-237821.1))));
  REQUIRE(((cosh(e).im == 1617114.6)));
  REQUIRE(((tan(e).re == (0))));
  REQUIRE(((tan(e).im == -1)));
  REQUIRE(((tanh(e).re == -1)));
  REQUIRE(((tanh(e).im == 0)));
}
// */
#endif // ifndef CATCH_AMALGAMATED_CUSTOM_MAIN

// SHELL = /bin/sh

// all: main

// CXX = clang++
// override CXXFLAGS += -g -Wno-everything

// SRCS := $(wildcard src/*.cpp)
// SRCS := $(filter-out catch_amalgamatecpp, $(SRCS))
// TESTS := $(wildcard *.cpp)
// TESTS := $(filter-out catch_amalgamatecpp, $(TESTS))
// HEADERS := $(wildcard *.h*)
// HEADERS := $(filter-out catch_amalgamatehpp, $(HEADERS))

// main: $(TESTS) ../src/facpp ../src/fah $(HEADERS)
// 	$(CXX) $(CXXFLAGS) $(TESTS) ../src/facpp catch_amalgamated -o "$@"

// main-debug: $(SRCS) $(HEADERS)
// 	$(CXX) $(CXXFLAGS) -O0 $(SRCS) -o "$@"

// catch_amalgamated: catch_amalgamatecpp catch_amalgamatehpp
// 	$(CXX) $(CXXFLAGS) -O0 -c catch_amalgamatecpp -o "$@"

// clean:
// 	rm -f main main-debug