#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

/*
 * Summary:     Converts Polar coordinates to complex number
 * Parameters:  Magnitude and Angle
 * Return:      Complex number coordinates
 * Author:      Sarthak Sarans
 */

#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

Complex polar(double mag, double ang){
    double real1 = mag*std::cos(ang); // Create complex real portion
  	double imag1 = mag*std::sin(ang); // Create complex imaginary portion
  	Complex *finals = new Complex(real1,imag1);
	
  return *finals; //Return complex number
}
