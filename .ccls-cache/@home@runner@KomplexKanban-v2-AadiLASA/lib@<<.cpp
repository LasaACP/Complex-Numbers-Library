#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

 ostream& operator << (ostream& out, const Complex& c) {
  out << c.re << " + " << c.im << "i" << endl;
  return out;
 }