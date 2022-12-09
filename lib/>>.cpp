#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

istream& operator >> (istream&in, Complex& c) {
  in >> c.re;
  in >> c.im;
  return in;
}