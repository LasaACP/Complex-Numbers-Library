#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the sine of a complex number
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Alex Huang
*/
Complex sin(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = floor((std::sin(realNum)*std::cosh(imagNum)*10)+.5)/10;
  double secondNum = floor((std::cos(realNum)*std::sinh(imagNum)*10)+.5)/10;
  Complex *finishedSin = new Complex(firstNum, secondNum);
  return *finishedSin;
}