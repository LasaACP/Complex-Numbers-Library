#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the absolute value of a complex number
*Parameters: Constant Complex Number Object
*Return: double
*Author: Aaditya Bhat
*/
double abs(const Complex num){
 double z =  sqrt((real(num))*(real(num)) + (imag(num))*(imag(num))); // calculate magnitude -> Square Root (Real Part Squared + Imaginary Part Squared)
  if(z<0){
    z=z*-1;
    //absolute value function (magnitude has to be positive)
  }
  return z; //Return Magnitude
}