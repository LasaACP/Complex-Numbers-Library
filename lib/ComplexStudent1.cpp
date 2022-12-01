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
double imag(const Complex&);
double real(const Complex&);
double abs(const Complex);
double arg(const Complex);
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




// - - - - - Other Functions Follow - - - - - - - - - - - -

//Imaginary Part of Complex Num

 double Complex::imag(const Complex& x){
  return x.im;
}

//Real Part of Complex Num

double Complex::real(const Complex& x){
  return x.re;
}

//Addition Operator Overload

Complex Complex::operator +(const Complex &num){
    double real1 = real(num) + re; // Add original and new real portion
  double imag1 = imag(num) + im; // Add imaginary and new imaginary portion
  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return *finalcomplex; //Return complex number
}


//Subtraction Operator Overload

Complex Complex::operator -(const Complex &num){
    double real1 = real(num) - re; // Subtract original and new real portion
  double imag1 = imag(num) - im; // Subtract imaginary and new imaginary portion
  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return *finalcomplex; //Return complex number
}

//Magnitude Function

double Complex::abs(const Complex num){
 double z =  sqrt((real(num))*(real(num)) + (imag(num))*(imag(num))); // calculate magnitude -> Square Root (Real Part Squared + Imaginary Part Squared)
  if(z<0){
    z=z*-1;
    // bootleg absolute value function (magnitude has to be positive)
  }
  return z; //Return Magnitude
}

// Angle Function

double Complex::arg(const Complex num){
  return atan((imag(num)/real(num))); // calculate angle -> arctan(imaginary part / real part)
}

