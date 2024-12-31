#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void carte_a_paular(double Inters, double ff, double *surender, double *at15);//prototype
void min_max(char af, char oof, char *erf, char *iff);//prototype

int main(int argc, const char *argv[])
{
	double re = 15.0;
	double im = 3.0;
	double Module = 15.0;
	double Argument = 3.0;
	printf("address of reality  = %p\n", &re);
	printf("address of math     = %p\n", &im);
	printf("address of Module   = %p\n", &Module);
	printf("address of Argument = %p\n", &Argument);
	carte_a_paular(re, im, &Module, &Argument);
	printf("address of Module   = %lf\n", Module);
	printf("address of Argument = %lf\n", Argument);

	char a = 'A';
	char b = 'Z';
	char min = 0;
	char max = 0;
	min_max(a, b, &min, &max);
	return 0;
}
void carte_a_paular(double Inters,double ff,double *surender , double *at15)
{
	printf("\n ff agency \n\n");
	printf("address of reality     = %p\n", &Inters);
	printf("address of math        = %p\n", &ff);
	printf("address of Module      = %p\n", &surender);
	printf("address of Argument    = %p\n\n", &at15);

	*surender = sqrt(Inters * Inters + ff * ff);
	*at15 = atan2(Inters, ff);


	return;
}
void min_max(char af, char oof, char *erf, char *iff)
{
	printf("Vroom a = %c\n", af);
	printf("Vroom b = %c\n", oof);
	printf("MATH aaaah = %d\n", af);
	printf("MATH Bééeee = %d\n", oof);
	*erf = af > oof ? oof : af;
	*iff = af > oof ? af : oof;
	printf("Min = %d\n", *erf);
	printf("Max = %d\n", *iff);

	return;
}