// Skip to content
// Search or jump to…
// Pull requests
// Issues
// Codespaces

/*
- - - - - - - - - - - - - - - - - - - - - - - - - - - - -
Title : Complex
Author : Sathvik C, Sarthak S, Alex H, Aaditya B, Jase B
URL : NA
Description : The complex class for complex numbers, and the functions that can be used upon them
Created : Nov. 28th
Modified : Dec. 14th
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

  //----------------------------------------- OPERATOR OVERLOADS -----------------------------------------------------
  friend ostream& operator << (ostream&, const Complex&);
  friend istream& operator >> (istream&, Complex&);
  Complex();

  //------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------
  Complex(double real, double imag);

    /**
     * Returns the imaginary part of complex number
     * @param com The complex number to find the imaginary part of
     * @return complex.imag
     * @author Aaditya Bhat
     */
  friend double imag(const Complex&);

 
   /**
     * Returns the real part of complex number
     * @param com The complex number to find the real part of
     * @return complex.real
     * @author Aaditya Bhat
     */
  friend double real(const Complex&);

 
    /**
     * Returns the magnitude of complex number
     * @param com The complex number to find the magnitude of
     * @return double
     * @author Aaditya Bhat
     */
  friend double abs(const Complex);


    /**
     * Returns the angle of complex number
     * @param com The complex number to find the angle of
     * @return double
     * @author Aaditya Bhat
     */
  friend double arg(const Complex);


  /**
     * Returns the conjugate of complex number
     * @param Complex number to find the conjugate of
     * @return Complex
     * @author Sarthak Sarans
     */
  friend Complex conj(const Complex&);


  /**
     * Returns the polar of complex number as per a magnitude & angle
     * @param Magnitude & Angle of a complex number
     * @return Complex
     * @author 
     */
  friend Complex polar(double mag, double angle);


  /**
     * Normalizes the complex number and returns the result
     * @param Complex number to normalize
     * @return Complex
     * @author Sathvik Chemudupati
     */
friend double norm(const Complex&);


//------------------------------------- ARITHMETIC LIBRARY FUNCTIONS -------------------------------------------
  /**
     * Returns the addition of two complex numbers
     * @param com complex number to add
     * @return Complex
     * @author Aaditya Bhat
     */
  Complex operator +(const Complex &num);


  /**
     * Returns the of subtraction of a complex number
     * @param com complex number to subtract
     * @return Complex
     * @author Jase Brown
     */
  Complex operator -(const Complex &num);


  /**
     * Returns the multiplication of two complex numbers
     * @param com complex number to multiply
     * @return Complex 
     * @author Sathvik Chemudupati
     */
  Complex operator *(const Complex &num);


  /**
     * Returns the division of two complex numbers
     * @param Complex number to divide
     * @return Complex
     * @author Sarthak Sarans
     */
  Complex operator /(const Complex &num);


  /**
     * Verifies the equality of two complex numbers
     * @param Complex number to compare
     * @return boolean
     * @author Sathvik Chemudupati
     */
  bool const operator ==(const Complex &num);


  /**
     * Verifies the equality (not) of two complex numbers
     * @param Complex number to compare
     * @return boolean
     * @author Sathvik Chemudupati
     */
  bool const operator !=(const Complex &num);


  /**
     * Returns the cosine of complex number
     * @param Complex number to evaluate the cosine of
     * @return Complex
     * @author Alex Huang
     */
  friend Complex cos(const Complex num);


  /**
     * Returns the hyperbolic cosine of complex number
     * @param Complex number to evaluate the hyperbolic cosine of
     * @return Complex
     * @author Alex Huang
     */
  friend Complex cosh(const Complex num);


  /**
     * Returns the sine of complex number
     * @param Complex number to evaluate the sine of
     * @return Complex
     * @author Alex Huang
     */
  friend Complex sin(const Complex num);


  /**
     * Returns the of hyperbolic sine of complex number
     * @param Complex number to evaluate the hyperbolic sine of
     * @return Complex
     * @author Alex Huang
     */
  friend Complex sinh(const Complex num);


  /**
     * Returns the tangent of complex number
     * @param The complex number to evaluate the tangent of
     * @return Complex
     * @author Alex Huang
     */
  friend Complex tan(const Complex num);


  /**
     * Returns the hyperbolic tangent of complex number
     * @param The complex number to evaluate hyperbolic tangent of
     * @return Complex
     * @author Alex Huang
     */
  friend Complex tanh(const Complex num);


}; 
#endif


