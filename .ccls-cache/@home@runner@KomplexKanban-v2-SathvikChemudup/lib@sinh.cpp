#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the hyperbolic sine of a complex number
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Alex Huang
*/
Complex sinh(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = floor((std::sinh(realNum)*std::cos(imagNum)*10)+0.5)/10;
  double secondNum = floor((std::cosh(realNum)*std::sin(imagNum)*10)+0.5)/10;
  Complex *finishedSinh = new Complex(firstNum, secondNum);
  return *finishedSinh;
}