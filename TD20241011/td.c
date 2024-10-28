#include <stdio.h>
#include <limits.h>
#include <float.h>

float i = 1e-40; //1 * 10^(-40)
double y = 1e-40; //1 * 10^(-40)



int main(int argc, const char *argv[])
{
	printf("char valeur min/max : %d ... %d\n", SCHAR_MAX,SCHAR_MAX);
	printf("unsigned char valeur min/max : %d ... %d\n", UCHAR_MAX,UCHAR_MAX);
	printf("short valeur min/max : %d ... %d\n", SHRT_MIN,SHRT_MAX);
	printf("float valeur min/max : %e ... %e\n", FLT_MIN,FLT_MAX);	
	printf("float valeur min/max : %f ... %f\n", FLT_MIN,FLT_MAX);
	printf("double valeur min/max : %le ... %le\n", DBL_MIN,DBL_MAX);
	printf("double valeur min/max : %lf ... %lf\n", DBL_MIN,DBL_MAX);
	printf("long double valeur min/max : %Le ... %Le\n", LDBL_MIN,LDBL_MAX);

	printf("float de 10^40 : %e \n", i);	
	printf("float de 10^40 : %f \n", i);	
	printf("float de 10^40 : %.50f \n", i);	

	printf("double de 10^40 : %.50lf \n", y);

#if 0
	int d = 42;
	int r;	
	r = d / 0; // --> division by zero --> crash --> test  before crash echo $?
	printf("r = d/0: %d \n", r);
#endif

	double d = 42.0;
	double r;	
	r = d / 0; // --> division by zero --> infinity
	printf("r = d/0: %lf \n", r);


	const double c = 299972458.0; // M/S^-2 lumière
	//valeur non modifiable 
	//afficher en mph %.1lf
	const double Ms_to_Kmh = 3.6;
	const double Km_to_Miles = 0.621371;
	printf("vitesse lumière en MPH : %.1lf \n", (c*Ms_to_Kmh)*Km_to_Miles);


#if 0
	c=c/2; //erreur
#endif

	return 0;
}