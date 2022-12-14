#include <cmath>
#include "../include/Complex.h"     
#include <ostream>
using namespace std;

Complex Complex::acos(const Complex num){
  double realnum = real(num);
  double imagnum = imag(num);
  double finalNum = ceil(cosh(realnum)/cos(imagnum)*100)/100;
  double secondFinalNum = ceil(sinh(realnum)/sin(imagnum)*-1*100)/100;
  Complex *finishedCos = new Complex(finalNum, secondFinalNum);
  return *finishedCos;
 
}