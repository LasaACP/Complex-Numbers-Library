#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Returns the real portion of a complex number
*Parameters: Constant Complex Number Object
*Return: double
*Author: Aaditya Bhat
*/
double real(const Complex& x){
  return x.re;
}