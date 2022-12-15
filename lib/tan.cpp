#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the tangent of a complex number
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Alex Huang
*/
Complex tan(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = floor(std::sin(2*realNum)/(std::cos(2*realNum)+std::cosh(2*imagNum))+0.5)/1;
  double secondNum = floor(std::sinh(2*imagNum)/(std::cos(2*realNum) + std::cosh(2*imagNum))+0.5)/1;
  Complex *finished = new Complex(firstNum, secondNum);
	return *finished;
}