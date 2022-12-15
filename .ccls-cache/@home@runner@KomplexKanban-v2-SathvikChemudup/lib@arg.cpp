#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the radian value of the angle of a complex number
*Parameters: Constant Complex Number Object
*Return: double
*Author: Aaditya Bhat
*/
double arg(const Complex num){
	
  return ceil(atan((imag(num)/real(num))) *180/M_PI*100)/100; // calculate angle -> arctan(imaginary part / real part)
}