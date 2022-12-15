#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Receives a complex number from standard input
*Parameters: istream object, Complex number object
*Return: istream
*Author: Sathvik Chemudupati
*/
istream& operator >> (istream&in, Complex& c) {
  in >> c.re;
  in >> c.im;
  return in;
}