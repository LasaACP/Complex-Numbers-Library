#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Finds the hyperbolic tangent of a complex number
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Alex Huang
*/
Complex tanh(const Complex num){
  Complex numerator = sinh(num);
  Complex denominator = cosh(num);
  Complex finished = numerator/denominator;
	finished.re = floor(finished.re+.5)/1; 
	finished.im = floor(finished.im+.5)/1; 
  return finished;
}