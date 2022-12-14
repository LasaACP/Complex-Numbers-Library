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
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536



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


//  ostream& operator << (ostream& out, const Complex& c) {
//   out << c.re << " + " << c.im << "i" << endl;
//   return out;
//  }

// istream& operator >> (istream&in, Complex& c) {
//   in >> c.re;
//   in >> c.im;
//   return in;
// }


// // - - - - - Other Functions Follow - - - - - - - - - - - -

// //Imaginary Part of Complex Num

//  double Complex::imag(const Complex& x){
//   return x.im;
// }

// //Real Part of Complex Num

// double Complex::real(const Complex& x){
//   return x.re;
// }

// //Addition Operator Overload

// Complex Complex::operator +(const Complex &num){
//     double real1 = real(num) + re; // Add original and new real portion
//   double imag1 = imag(num) + im; // Add imaginary and new imaginary portion
//   Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
//   return *finalcomplex; //Return complex number
// }

// //Multiplication Operator Overload
// Complex Complex::operator *(const Complex &num) {
//   double real1 = real(num);
//   double imag1 = imag(num);
//   double newReal1 = real1 * re; // multiply first terms of product
//   double newImag1 = (real1 * im) + (imag1 * re); //sum of inner products
//   double newReal2 = imag1 * im * -1; // add outer product to original product
//   double newRealFinal = newReal1 + newReal2;
//   Complex *finalComplex = new Complex(newRealFinal, newImag1);
//   return *finalComplex;
// }


// //Subtraction Operator Overload

// Complex Complex::operator -(const Complex &num){
//     double real1 = re - real(num); // Subtract original and new real portion
//   double imag1 = im - imag(num); // Subtract imaginary and new imaginary portion
//   Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
//   return *finalcomplex; //Return complex number
// }

// //Division Operator Overload

// Complex Complex::operator /(const Complex &num){
//     double real1 = real(num); // Create conjugate real portion
//   	double imag1 = -1*imag(num); // Create conjugate imaginary portion
//   Complex *oppconjugate = new Complex((real1),(-1*imag1)); // Create opposite conjugate imaginary portion
// 	Complex *conjugate = new Complex((real1),(imag1)); // Make conjugate
// 	Complex *normals = new Complex(re,im); //Normal complex number

// 	Complex fina = (*normals * *conjugate); // numerater of division
	
// 	fina.re = real(fina)/real((*conjugate**oppconjugate)); //divide real portion
// 	fina.im = imag(fina)/real((*conjugate**oppconjugate)); //divide imaginary portion
// 	Complex *finals = new Complex(real(fina), imag(fina));
//   return *finals; //Return complex number
// }



// //Magnitude Function

// double Complex::abs(const Complex num){
//  double z =  sqrt((real(num))*(real(num)) + (imag(num))*(imag(num))); // calculate magnitude -> Square Root (Real Part Squared + Imaginary Part Squared)
//   if(z<0){
//     z=z*-1;
//     // bootleg absolute value function (magnitude has to be positive)
//   }
//   return z; //Return Magnitude
// }

// // Angle Function

// double Complex::arg(const Complex num){
//   return atan((imag(num)/real(num))); // calculate angle -> arctan(imaginary part / real part)
// }
