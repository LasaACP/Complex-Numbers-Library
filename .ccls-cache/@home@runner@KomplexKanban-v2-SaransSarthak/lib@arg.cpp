#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

double Complex::arg(const Complex num){
	
  return ceil(atan((imag(num)/real(num))) *180/M_PI*100)/100; // calculate angle -> arctan(imaginary part / real part)
}