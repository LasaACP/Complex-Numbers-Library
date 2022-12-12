// Skip to content
// Search or jump to…
// Pull requests
// Issues
// Codespaces

/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex
Author : _________
URL : NA
Description : The complex class for complex numbers, and the functions that can be used upon them
Created : _______
Modified : _______
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
*/

#ifndef COMPLASA_H
#define COMPLASA_H

#include <iostream>


using namespace std;

class Complex{
public:
  double re = 0;
  double im = 0;


friend ostream& operator << (ostream&, const Complex&);
friend istream& operator >> (istream&, Complex&);
  Complex();
  Complex(double real, double imag);
  double imag(const Complex&);
  double real(const Complex&);
  double abs(const Complex);
  double arg(const Complex);
  Complex operator +(const Complex &num);
  Complex operator -(const Complex &num);
  Complex operator *(const Complex &num);
  Complex operator /(const Complex &num);
}; 
#endif

// class Complex {

//     //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------

//     /**
//      * Returns the real part of comlpex number
//      * @param com The complex number to find the real part of
//      * @return complex.real
//      * @author ___________
//      */
//     friend double real(Complex);
//     /**
//      * Returns the imaginary part of complex number
//      * @param com The complex number to find the real part of
//      * @return complex.imaginary
//      * @author _________
//      */
//       friend double imag(Complex);
  
  
  
  
  
//       //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------

//     /**
//      * Returns the absolute value (sqrt(a^2+b^2)) of com
//      * @param com the complex number to find the absolute value of
//      * @return the absolute value of com
//      * @author ____________
//      */
//     friend double abs(Complex);
// friend int operator +(const Complex) const;

  
  
  
  
  
// } // Complex class declaration
