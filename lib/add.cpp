public Complex add(Complex num1, Complex num2){
  // Get Both Reals
  double real1 = num1.getReal();
  double real2 = num2.getReal();
  // Get Both Ims
  double im1 = num1.getIm();
  double im2 = num2.getIm();

  Complex finalcomplex = new Complex((real1+real2),(im1+im2)); //Add both complex numbers
  return finalcomplex; //Return added number

}