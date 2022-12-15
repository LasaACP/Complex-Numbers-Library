/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : ComplexStudent1.cpp
Author : Sathvik C, Sarthak S, Alex H, Aaditya B, Jase B
URL : NA
Description : The implementation for Complex class constructors (default and initialization) 
Created : Nov. 28th
Modified : Dec. 14th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536



Complex::Complex() 
{
  // Constructor code
		re = 0;
		im = 0;
}
Complex::Complex(double real, double imag) 
{
  // Constructor code
		re = real;
		im = imag;
}

