#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

double Complex::arg(const Complex num){
  return atan((imag(num)/real(num))); // calculate angle -> arctan(imaginary part / real part)
}