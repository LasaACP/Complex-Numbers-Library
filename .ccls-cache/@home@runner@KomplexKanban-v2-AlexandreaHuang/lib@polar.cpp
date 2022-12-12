Complex Complex::cos(const Complex num){
  double realnum = real(num);
  double imagnum = imag(num);
  double finalNum = cos(realnum)*cosh(imag)
  double secondFinalNum = sin(realnum)*sinh(imag)*-1;
  Complex *finishedCos = new Complex(finalNum, secondFinalNum);
  return *finishedCos;
  
}

Complex Complex::cosh(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double finalNum = cosh(realNum) * cos(imagNum);
  double secondFinalNum = sinh(realnum) * sin(imagNum);
  Complex *finishedCosh = new Complex(finalNum, secondFinalNum);
  return *finishedCosh;
  
  
}

Complex Complex::exp(const Complex num){
  double angle = ang(num);
  double firstPart = cos(angle);
  double secondPart = sin(angle);
  Complex *finishedExp = new Complex(finalNum, secondFinalNum);
  return *finishedExp;
}

Complex Complex::sin(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = sin(realNum)*cosh(imagNum);
  double secondNum = cos(realNum)*sinh(imagNum);
  Complex *finishedSin = new Complex(firstNum, secondNum);
  return *finishedSin;
}

Complex Complex::sinh(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double firstNum = sinh(realNum)*cos(imagNum);
  double secondNum = cosh(realNum)*sin(imagNum);
  Complex *finishedSinh = new Complex(firstNum, secondNum);
  return *finishedSinh;
}

Complex Complex::tan(const Complex num){
  Complex numerator = sin(num);
  Complex denominator = cos(num);
  Complex *finished = numerator/denominator;
  return *finished;
}

Complex Complex::tanh(const Complex num){
  Complex numerator = sinh(num);
  Complex denominator = cosh(num);
  Complex *finished = numerator/denominator;
  return *finished;
}

Complex Complex::sqrt(const Complex num){
  double realNum = real(num);
  double imagNum = imag(num);
  double insideSqrt = sqrt(realNum^2 + imagNum^2);
  double firstPart = sqrt((insideSqrt + x)/2);

  double secondPart = sqrt((insideSqrt-x)/2);

  double firstSecondPart = imagNum/abs(imagNum);

  double compiledSecondPart = secondPart*firstSecondPart

  Complex *finished = new Complex(firstPart, compiledSecondPart);
  return *finished;
}