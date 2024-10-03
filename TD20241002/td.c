#include <stdio.h>

//Calcul courant U/R=I 

// Init variable  en double (8 octet = 64 bits)
double U = 0; //Tension
double R = 0; //Resistance

double I; // Courant

int main(int argc, const char *argv[])
{
	printf("Tension [v] : ");
	scanf("%lf", &U);
	printf("\n");

	printf("Resistance [Ohm] : ");
	scanf("%lf", &R);
	printf("\n");

	//Test de la résistance
	if (R <= 0)
	{
		printf("Valeur de la résistance incorrect");
		return 1;
	}
		
	//Calcul et affichage du courant
	I = U/R;
	printf("Courant : %.10e [A] ",I);
		
	return 0;
}