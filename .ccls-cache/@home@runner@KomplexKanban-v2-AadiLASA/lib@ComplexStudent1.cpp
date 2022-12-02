/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex______.cpp
Author : _______
URL : NA
Description : The implementation for Complex.h that was written by 
Created : Nov. 28th
Modified : Dec. 11th
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#include <cmath>
#include "Complex.h"

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

Complex::Complex() 
{
  // Constructor code
}
Complex operator +(const Complex &num){
    double real1 = num.getReal() + re; // Add original and new real portion
  double imag1 = num.getIm() + im; // Add imaginary and new imaginary portion
  Complex finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return finalcomplex; //Return complex number
}

// - - - - - Other Functions Follow - - - - - - - - - - - -