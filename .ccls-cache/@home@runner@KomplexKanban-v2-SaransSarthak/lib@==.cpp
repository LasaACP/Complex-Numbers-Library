#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

bool const Complex::operator ==(const Complex &num){
    double real1 = real(num); // Add original and new real portion
  double imag1 = imag(num); // Add imaginary and new imaginary portion
	return (real1 == re && imag1 == im);
}