#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

/*
*Summary: Normalizes a complex number
*Parameters: Constant Complex Number Object
*Return: double
*Author: Sathvik Chemudupati

*/
double norm(const Complex &c) {
  return abs(c) * abs(c);
}