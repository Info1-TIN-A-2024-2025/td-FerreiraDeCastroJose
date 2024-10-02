#include <stdio.h>
#include <string.h>

// Init fct
double ReadNumber(double Number);
double Multiplication(double Number1, double Number2, double Number3);

int main(int argc, const char *argv[])
{
	// Init variable  en double (8 octet = 64 bits)
	double a = 0;
	double b = 0;
	double c = 0;

	double R; // Valeur réponse

	/*
	//Donner valeur au variable avant le calcul
	a = 10;
	b = 20;
	c = 0.5;
	*/

	// add value from Terminal
	printf("Insérez la valeur a");
	a = ReadNumber(a);

	printf("Insérez la valeur b");
	b = ReadNumber(b);

	printf("Insérez la valeur c");
	c = ReadNumber(c);

	// Calcul
	R = Multiplication(a, b, c);

	// Show
	printf("Regarde ma multiplication :\n%lg * %lg * %lg =  %lg", a, b, c, R);

	return R;
}
// Lecture d'un nombre à inserer dans le terminal
double ReadNumber(double Number)
{
	printf("\n");
	scanf("%lf", &Number);
	printf("\n");

	return Number;
}

// Calcul multiplication
double Multiplication(double Number1, double Number2, double Number3)
{
	double Answer = 0;

	Answer = Number1 * Number2 * Number3;
	return Answer;
}