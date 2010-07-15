

#include <blitz/blitz.h>
#include <blitz/array.h>
#include <complex>
#include <cmath>
 #include <random/uniform.h> 
 #include <random/normal.h> 
#include <time.h> 

#ifdef BZ_HAVE_STD
#include <fstream>
#else
#include <fstream.h>
#endif

BZ_USING_NAMESPACE(blitz)

using namespace ranlib; 

inline double my_arg(complex<double> z)
{
	double temp = arg(z);
	return (temp >= 0) ? temp : temp + 2*M_PI; 
}


void test_fn();

Uniform<double> x; 

int main() 
{ 
// At start of program, seed with the system time so we get 
// a different stream of random numbers each run. 
//	Uniform<float> x; 
	x.seed((unsigned int)time(0)); 

	double a,b,angle;
	complex<double> y, z, I;
	
	I = complex<double>(0,1);
	for (int i=0; i<=10; i++) {
		
		angle = 2*M_PI*(x.random()-0.5);
		z = exp(I*angle);
		cout <<  z << " " << angle*180/M_PI << endl;
		cout << arg(z) << " "  <<  my_arg(z)*180/M_PI << "  " << angle << endl << endl;
	}	
 
	
	
} 

void test_fn()
{

	float yf;
	
	for (int i=0; i<10; i++) 
	
	cout << "Inside fn " <<  x.random() << endl;
	
}
