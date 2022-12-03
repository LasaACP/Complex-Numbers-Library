Complex* conjugate (Complex *num)
{
double real1 = real(num); // Create conjugate real portion
  	double imag1 = -1*imag(num); // Create conjugate imaginary portion
	Complex *conjugate = new Complex((real1),(imag1)); // Make conjugate

	return conjugate;
}