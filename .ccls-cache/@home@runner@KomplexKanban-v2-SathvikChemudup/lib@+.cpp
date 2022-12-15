	#include <cmath>
	#include "../include/Complex.h"     
	#include <ostream>
	using namespace std;

/*
*Summary: Adds two complex numbers
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Aaditya Bhat
*/

	Complex Complex::operator +(const Complex &num){
	    double real1 = real(num) + re; // Add original and new real portion
	  double imag1 = imag(num) + im; // Add imaginary and new imaginary portion
	  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
	  return *finalcomplex; //Return complex number
	}