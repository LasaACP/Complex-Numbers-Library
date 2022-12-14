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

	REQUIRE(((a.cosb(a).re == 23083.7) ));
	REQUIRE(((a.cosb(a).im == 78034.8) ));

	REQUIRE(((a.sinb(a).re == -78034.8) ));
	REQUIRE(((a.sinb(a).im == 23083.7) ));
		

	REQUIRE(((a.sinhb(a).re == (62.6)) ));
	REQUIRE(((a.sinhb(a).im == -39.8) ));


  REQUIRE(((a.coshb(a).re == (62.6)) ));
	REQUIRE(((a.coshb(a).im == -39.8) ));
	REQUIRE(((a.tan(a).re == (0)) ));
	REQUIRE(((a.tan(a).im == 1) ));
	REQUIRE(((a.tanh(a).re == 1) ));
	REQUIRE(((a.tanh(a).im == 0) ));

	//make b

	REQUIRE(((b.cosb(b).re == -27) ));
	REQUIRE(((b.cosb(b).im == -3.9) ));

	REQUIRE(((b.sinb(b).re == 3.9) ));
	REQUIRE(((b.sinb(b).im == -27) ));
	
	REQUIRE(((b.sinhb(b).re == (-6.5)) ));
	REQUIRE(((b.sinhb(b).im == -7.6) ));
  REQUIRE(((b.coshb(b).re == (-6.6)) ));
	REQUIRE(((b.coshb(b).im == -7.6) ));
	REQUIRE(((b.tan(b).re == (0)) ));
	REQUIRE(((b.tan(b).im == 1) ));
	REQUIRE(((b.tanh(b).re == 1) ));
	REQUIRE(((b.tanh(b).im == 0) ));
	


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


  //test c
  cout << "imaginary " << c.cosb(c).im << endl;
	REQUIRE(((c.cosb(c).re == 23083.7) ));
	REQUIRE(((c.cosb(c).im == -78034.8) ));

	REQUIRE(((c.sinb(c).re == 78034.8) ));
	REQUIRE(((c.sinb(c).im == 23083.7) ));
	
	REQUIRE(((c.sinhb(c).re == (-62.6)) ));
	REQUIRE(((c.sinhb(c).im == -39.8) ));
  REQUIRE(((c.coshb(c).re == (62.6)) ));
	REQUIRE(((c.coshb(c).im == 39.8) ));
	REQUIRE(((c.tan(c).re == (0)) ));
	REQUIRE(((c.tan(c).im == 1) ));
	REQUIRE(((c.tanh(c).re == -1) ));
	REQUIRE(((c.tanh(c).im == 0) ));
	

  //test d
  cout << d.cosb(d).im << endl;
  REQUIRE(((d.cosb(d).re == -27) ));
	REQUIRE(((d.cosb(d).im == 3.9) ));

	REQUIRE(((d.sinb(d).re == -3.9) ));
	REQUIRE(((d.sinb(d).im == -27) ));
	
	REQUIRE(((d.sinhb(d).re == (6.5)) ));
	REQUIRE(((d.sinhb(d).im == -7.6) ));
  REQUIRE(((d.coshb(d).re == (-6.6)) ));
	REQUIRE(((d.coshb(d).im == 7.6) ));
	REQUIRE(((d.tan(d).re == (0)) ));
	REQUIRE(((d.tan(d).im == 1) ));
	REQUIRE(((d.tanh(d).re == -1) ));
	REQUIRE(((d.tanh(d).im == 0) ));
  
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