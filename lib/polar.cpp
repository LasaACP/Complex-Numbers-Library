#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

Complex Complex::sinhb(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = sinh(realNum)*cos(imagNum);
  double secondNum = cosh(realNum)*sin(imagNum);
  Complex *finishedSinh = new Complex(firstNum, secondNum);
  return *finishedSinh;
}

Complex Complex::tan(const Complex num){
  Complex numerator = sinb(num);
  Complex denominator = cosb(num);
  Complex finished = numerator/denominator;
  return finished;
}

Complex Complex::tanh(const Complex num){
  Complex numerator = sinhb(num);
  Complex denominator = coshb(num);
  Complex finished = numerator/denominator;
  return finished;
}

Complex Complex::cosb(const Complex num){
  double realnum = real(num);
  double imagnum = imag(num);
  double finalNum = (cos(realnum)*cosh(imagnum)*1);
  double secondFinalNum = (sin(realnum)*sinh(imagnum)*-1*1);
  Complex *finishedCos = new Complex(finalNum, secondFinalNum);
  return *finishedCos;
 
}

Complex Complex::coshb(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double finalNum = cosh(realNum) * cos(imagNum);
  double secondFinalNum = sinh(realNum) * sin(imagNum);
  Complex *finishedCosh = new Complex(finalNum, secondFinalNum);
  return *finishedCosh;
 
 
}

Complex Complex::exp(const Complex num){
  double angle = arg(num);
  double firstPart = cos(angle);
  double secondPart = sin(angle);
  Complex *finishedExp = new Complex(firstPart, secondPart);
  return *finishedExp;
}

Complex Complex::sinb(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = sin(realNum)*cosh(imagNum);
  double secondNum = cos(realNum)*sinh(imagNum);
  Complex *finishedSin = new Complex(firstNum, secondNum);
  return *finishedSin;
}
