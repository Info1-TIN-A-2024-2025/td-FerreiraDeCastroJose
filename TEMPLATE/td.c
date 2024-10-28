#include <math.h>
#include <stdio.h>

int n = 1000;
unsigned char count = 0;
const double pi = 3.14159265;
double a = 0;
float b = 0;

int main(int argc, const char *argv[])
{
	//Logarithm

	printf("Inserez un chiffre dans n : ");
	scanf("%d", &n);
	printf("\n");

	//count = floor(log10(n)) + 1; //floor arrondie à la valeur du dessous 
	// log10(550) = 2.75

	//nombre digit nécessaire
	count = log10(n) + 1; // décimal
	printf("Nombre de digit dans n ( décimal ) = %d\n",count);

	count = log2(n) + 1; //binaire
	printf("Nombre de digit dans n ( binaire ) = %d\n",count);

	count = (log10(n)/log10(16)) + 1; //Hexadécimal
	printf("Nombre de digit dans n ( Hexadecimal ) = %d\n",count);


	//Trigo
	printf("Inserez un angle a : ");
	scanf("%lf", &a);
	printf("\n");

	//Sin() et cos() donne rad , convertion en a*pi/180
	printf("cos(a) = %.6lf\n",cos((a*pi)/180));
	printf("sin(a) = %.6lf\n",sin((a*pi)/180)); 
	printf("Tan(a) = = %.6lf\n",tan((a*pi)/180)); 
	printf("Tan(a) = sin(a)/cos(a) = %.6lf\n",(sin((a*pi)/180)/(cos((a*pi)/180)))); 
	printf("Tan(a) - sin(a)/cos(a) = %.10le\n",tan((a*pi)/180)-(sin((a*pi)/180)/(cos((a*pi)/180)))); 

	//b est un float
	printf("Inserez un angle b : ");
	scanf("%f", &b);
	printf("\n");

	//Sin() et cos() donne rad , convertion en a*pi/180
	printf("cos(b) = %.6f\n",cos((b*pi)/180));
	printf("sin(b) = %.6f\n",sin((b*pi)/180)); 
	printf("Tan(b) = = %.6f\n",tan((b*pi)/180)); 
	printf("Tan(b) = sin(b)/cos(b) = %.6f\n",(sin((b*pi)/180)/(cos((b*pi)/180)))); 
	printf("Tan(b) - sin(b)/cos(b) = %.10le\n",tan((b*pi)/180)-(sin((b*pi)/180)/(cos((b*pi)/180)))); 


	return 0;
}