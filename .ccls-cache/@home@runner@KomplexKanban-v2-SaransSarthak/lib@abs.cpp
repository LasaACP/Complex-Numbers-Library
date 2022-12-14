#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

double Complex::abs(const Complex num){
 double z =  sqrt((real(num))*(real(num)) + (imag(num))*(imag(num))); // calculate magnitude -> Square Root (Real Part Squared + Imaginary Part Squared)
  if(z<0){
    z=z*-1;
    // bootleg absolute value function (magnitude has to be positive)
  }
  return z; //Return Magnitude
}