#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Returns the imaginary component of a complex number
*Parameters: Constant Complex Number Object
*Return: double
*Author: Aaditya Bhat
*/
 double imag(const Complex& x){
  return x.im;
}