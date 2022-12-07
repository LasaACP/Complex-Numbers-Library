Complex Complex::operator /(const Complex &num){
    double real1 = real(num); // Create conjugate real portion
  double imag1 = -1*imag(num); // Create conjugate imaginary portion
  
	Complex *conjugate = new Complex((real1),(imag1)); // Make conjugate
	Complex *normals = new Complex(re,im); //Normal complex number

	Complex *finals = (normals*conjugate); // numerater of division
	*finals->re = real(finals)/(num*conjugate); //divide real portion
	*finals->im = imag(finals)/(num*conjugate); //divide imaginary portion
  return *final; //Return complex number
}
