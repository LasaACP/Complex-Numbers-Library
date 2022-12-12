#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

Complex Complex::operator -(const Complex &num){
    double real1 = re - real(num); // Subtract original and new real portion
  double imag1 = im - imag(num); // Subtract imaginary and new imaginary portion
  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return *finalcomplex; //Return complex number
}