#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the cosine of a complex number
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Alex Huang
*/
Complex cos(const Complex num){
  double realnum = real(num);
  double imagnum = imag(num);
  double finalNum = (floor((std::cos(realnum)*std::cosh(imagnum)*10)+.5)/10);
  double secondFinalNum = floor((std::sin(realnum)*std::sinh(imagnum)*-1*10)+.5)/10;
  Complex *finishedCos = new Complex(finalNum, secondFinalNum);
  return *finishedCos;
}