#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

/*
 * Summary:     Find conjugate of a complex number
 * Parameters:  Constant complex number
 * Return:      Complex number conjugate
 * Author:      Sarthak Sarans
 */

#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

Complex conj(const Complex &num){
    double real1 = real(num); // Create conjugate real portion
  	double imag1 = -1*imag(num); // Create conjugate imaginary portion
  	Complex *finals = new Complex(real1,imag1);
	
  return *finals; //Return complex number
}


