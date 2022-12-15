#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Outputs complex number object to standard input
*Parameters: ostream object, Complex Number Object
*Return: ostream
*Author: Aaditya Bhat
*/
 ostream& operator << (ostream& out, const Complex& c) {
  out << c.re << " + " << c.im << "i" << endl;
  return out;
 }