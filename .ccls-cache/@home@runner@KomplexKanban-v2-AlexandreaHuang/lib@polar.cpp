#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

Complex Complex::sinhb(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = floor((sinh(realNum)*cos(imagNum)*10)+0.5)/10;
  double secondNum = floor((cosh(realNum)*sin(imagNum)*10)+0.5)/10;
  Complex *finishedSinh = new Complex(firstNum, secondNum);
  return *finishedSinh;
}

Complex Complex::tan(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = floor(sin(2*realNum)/(cos(2*realNum)+cosh(2*imagNum))+0.5)/1;
  double secondNum = floor(sinh(2*imagNum)/(cos(2*realNum) + cosh(2*imagNum))+0.5)/1;
  Complex *finished = new Complex(firstNum, secondNum);
	return *finished;
}

Complex Complex::tanh(const Complex num){
  Complex numerator = sinhb(num);
  Complex denominator = coshb(num);
  Complex finished = numerator/denominator;
	finished.re = floor(finished.re+.5)/1; 
	finished.im = floor(finished.im+.5)/1; 

  return finished;
}

Complex Complex::cosb(const Complex num){
  double realnum = real(num);
  double imagnum = imag(num);
  double finalNum = (floor((cos(realnum)*cosh(imagnum)*10)+.5)/10);
  double secondFinalNum = floor((sin(realnum)*sinh(imagnum)*-1*10)+.5)/10;
  Complex *finishedCos = new Complex(finalNum, secondFinalNum);
  return *finishedCos;
 
}

Complex Complex::coshb(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double finalNum = floor((cosh(realNum) * cos(imagNum)*10)+0.5)/10;
  double secondFinalNum = floor((sinh(realNum) * sin(imagNum)*10)+0.5)/10;
  Complex *finishedCosh = new Complex(finalNum, secondFinalNum);
  return *finishedCosh;
 
 
}


Complex Complex::sinb(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = floor((sin(realNum)*cosh(imagNum)*10)+.5)/10;
  double secondNum = floor((cos(realNum)*sinh(imagNum)*10)+.5)/10;
  Complex *finishedSin = new Complex(firstNum, secondNum);
  return *finishedSin;
}
