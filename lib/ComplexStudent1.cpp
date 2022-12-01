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
// #include "Complex.h"     <-------- Not working rn

#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536
class Complex{
private:
  double re = 0;
  double im = 0;
Complex();
Complex(double real, double imag);
double getReal();
double getIm();
Complex operator +(const Complex &num);
Complex operator -(const Complex &num);
};
Complex::Complex() 
{
  // Constructor code

		re = 0;
		im = 0;
}
Complex::Complex(double real, double imag) 
{
  // Constructor code
		re = real;
		im = imag;
}

 double Complex::getReal(){
  return re;
}

double Complex::getIm(){
  return im;
}


// - - - - - Other Functions Follow - - - - - - - - - - - -

//Addition Operator Overload

Complex Complex::operator +(const Complex &num){
    double real1 = num.re + re; // Add original and new real portion
  double imag1 = num.im + im; // Add imaginary and new imaginary portion
  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return *finalcomplex; //Return complex number
}


//Subtraction Operator Overload

Complex Complex::operator -(const Complex &num){
    double real1 = num.re - re; // Subtract original and new real portion
  double imag1 = num.im - im; // Subtract imaginary and new imaginary portion
  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return *finalcomplex; //Return complex number
}
