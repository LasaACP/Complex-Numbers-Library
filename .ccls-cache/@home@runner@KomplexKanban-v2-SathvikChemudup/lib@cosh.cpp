#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the hyperbolic cosine of a complex number
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Alex Huang
*/
Complex cosh(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double finalNum = floor((std::cosh(realNum) * std::cos(imagNum)*10)+0.5)/10;
  double secondFinalNum = floor((std::sinh(realNum) * std::sin(imagNum)*10)+0.5)/10;
  Complex *finishedCosh = new Complex(finalNum, secondFinalNum);
  return *finishedCosh;
 
 
}