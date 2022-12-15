#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;
/*
*Summary: Divides two complex numbers, courtesy of Sarthak Sarans
*Parameters: Constant Complex Number Object
*Return: Complex
*Author: Sarthak Sarans
*/
Complex Complex::operator /(const Complex &num){
    double real1 = real(num); // Create conjugate real portion
  	double imag1 = -1*imag(num); // Create conjugate imaginary portion
  Complex *oppconjugate = new Complex((real1),(-1*imag1)); // Create opposite conjugate imaginary portion
	Complex *conjugate = new Complex((real1),(imag1)); // Make conjugate
	Complex *normals = new Complex(re,im); //Normal complex number

	Complex fina = (*normals * *conjugate); // numerater of division
	
	fina.re = real(fina)/real((*conjugate**oppconjugate)); //divide real portion
	fina.im = imag(fina)/real((*conjugate**oppconjugate)); //divide imaginary portion
	Complex *finals = new Complex(real(fina), imag(fina));
  return *finals; //Return complex number
}