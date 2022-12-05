#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;
//#include "../include/Complex.h"
#include "fac.h"
#include <cmath>
#define PI 3.1415926538979323846
#define EULER 2.71828182845904523536

class Complex {
private:
  int re = 0;
int im = 0;
public:
friend ostream& operator << (ostream&, const Complex&);
Complex() 
{
  // Constructor code

		re = 0;
		im = 0;
}
Complex(double real, double imag) 
{
  // Constructor code
		re = real;
		im = imag;
}


friend ostream& operator << (ostream& out, const Complex& num) {
  out << num.re << " + " << num.im << "i" << endl;
  return out;
}



// - - - - - Other Functions Follow - - - - - - - - - - - -

//Imaginary Part of Complex Num

 double imag(const Complex& x){
  return x.im;
}

//Real Part of Complex Num

double real(const Complex& x){
  return x.re;
}

//Addition Operator Overload

Complex operator +(const Complex &num){
    double real1 = real(num) + re; // Add original and new real portion
  double imag1 = imag(num) + im; // Add imaginary and new imaginary portion
  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return *finalcomplex; //Return complex number
}

//Multiplication Operator Overload
Complex operator *(const Complex &num) {
  double real1 = real(num);
  double imag1 = imag(num);
  double newReal1 = real1 * re; // multiply first terms of product
  double newImag1 = (real1 * im) + (imag1 * re); //sum of inner products
  double newReal2 = imag1 * im * -1; // add outer product to original product
  double newRealFinal = newReal1 + newReal2;
  Complex *finalComplex = new Complex(newRealFinal, newImag1);
  return *finalComplex;
}


//Subtraction Operator Overload

Complex operator -(const Complex &num){
    double real1 = re - real(num); // Subtract original and new real portion
  double imag1 = im - imag(num); // Subtract imaginary and new imaginary portion
  Complex *finalcomplex = new Complex((real1),(imag1)); // Merge into complex number
  return *finalcomplex; //Return complex number
}

//Division Operator Overload

//fix the divide
Complex operator /(const Complex &num){
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



//Magnitude Function

double abs(const Complex num){
 double z =  sqrt((real(num))*(real(num)) + (imag(num))*(imag(num))); // calculate magnitude -> Square Root (Real Part Squared + Imaginary Part Squared)
  if(z<0){
    z=z*-1;
    // bootleg absolute value function (magnitude has to be positive)
  }
  return z; //Return Magnitude
}

// Angle Function

double arg(const Complex num){
  return atan((imag(num)/real(num))); // calculate angle -> arctan(imaginary part / real part)
}


};

int main () {

    std::cout << "Hello CompLASA Arithmetic Library" << std::endl;

 Complex* a = new Complex(5.0,6.0);
  Complex*b = new Complex(3, 4);
    std::cout << *a / *b << endl;
      

    //std::cout << "Factorial test " << Factorial(5) << std::endl;

/*
   * * * * * * * * * * Required Functions * * * * * * * * * 
*/
  
  /*
    Complex a(5.0,6.0),b;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a * b = " << a * b << "\n";
    std::cout << "a / b = " << a / b << "\n";
    std::cout << "|a| = "   << abs(a) << "\n";
    std::cout << "complex conjugate of a = " << conj(a) << "\n";
    std::cout << "norm of a = " << norm(a) << "\n";
    std::cout << "abs of a = " << abs(a) << "\n";
    std::cout << "exp(a) = " << exp(a) << "\n";

    Complex j = Complex(0.0,1.0);
    Complex z1 = 1+2*j;
    Complex z2 = 2+3*j;

    z1 += z2;

    cout << "Complex number example: " << z1 << "\n";
    cout << "The conjugate is: " << conj(z1) << "\n";
    cout << "The magnitude is: " << abs(z1) << "\n";
    cout << "The phase in Radians is: " << arg(z1) << "\n";
    cout << "The norm is: " << norm(z1) << "\n";
    cout << "The sqrt is: " << sqrt(z1) << "\n";
    cout << "The natural log is: " << log(z1) << "\n";
    cout << "The sin is: " << sin(z1) << "\n";
*/

  
    /* other function testing */
  /*
    cout << "\n------ OTHER FUNCTION TESTING ------\n\n";
    cout << "The real part is: " << real(a) << "\n";
    cout << "The imaginary part is: " << imag(a) << "\n";
    cout << "The log (base 10) is: " << log10(a) << "\n";
    cout << "a^b is: " << pow(a, b) << "\n";
    cout << "a^2.7 is: " << pow(a, 2.7) << "\n";
    cout << "2.7^a is: " << pow(2.7, a) << "\n";
    cout << "The cube root is: " << root(a, 3) << "\n\n";

    cout << "(a == b) is: " << ((a==b) ? "true" : "false") << "\n";
    cout << "(a != b) is: " << ((a!=b) ? "true" : "false") << "\n\n";

    cout << "sin(a) = " << sin(a) << "\n";
    cout << "cos(a) = " << cos(a) << "\n";
    cout << "tan(a) = " << tan(a) << "\n\n";

    cout << "The asin is: " << asin(a) << "\n";
    cout << "The acos is: " << acos(a) << "\n";
    cout << "The atan is: " << atan(a) << "\n";
    cout << "The acsc is: " << acsc(a) << "\n";
    cout << "The asec is: " << asec(a) << "\n";
    cout << "The acot is: " << acot(a) << "\n\n";

    cout << "The asinh is:" << asinh(a) << "\n";
    cout << "The acosh is: " << acosh(a) << "\n";
    cout << "Rounded to 2 decimal places: " << acosh(a).rnd(2) << "\n";
    cout << "The atanh is: " << atanh(a) << "\n";
    cout << "The acsch is: " << acsch(a) << "\n";
    cout << "The asech is: " << asech(a) << "\n";
    cout << "The acoth is: " << acoth(a) << "\n";
    cout << "The complex number rotated by pi/6 radians is: " << rotate(a, PI/6) << "\n";
  */
}
 