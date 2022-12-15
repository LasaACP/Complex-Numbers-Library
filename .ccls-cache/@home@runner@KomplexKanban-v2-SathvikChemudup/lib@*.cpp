#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

/*
*Summary: Multiplies two complex numbers
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Sathvik Chemudupati
*/

Complex Complex::operator *(const Complex &num) {
  double real1 = real(num);
  double imag1 = imag(num);
  double newReal1 = real1 * re; // multiply first terms of product
  double newImag1 = (real1 * im) + (imag1 * re); //sum of inner products
  double newReal2 = imag1 * im * -1; // add outer product to original product
  double newRealFinal = newReal1 + newReal2;
  Complex *finalComplex = new Complex(newRealFinal, newImag1);
  return *finalComplex;
}
