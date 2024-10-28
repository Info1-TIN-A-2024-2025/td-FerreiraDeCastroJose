#include <math.h>
#include <stdio.h>
#include <stdlib.h> //atoi , atof

double n = 1000;


int main(int argc, const char *argv[])
{
	#if 0
	printf(" argc = %d", argc); // argc is the number of arguments passed to the program
	printf(" \n"); 

	//test with
	//./app								/1
	//./app	10 20						/3
	//./app toto titi					/3
	//./app albert einstein				/3
	//./app "albert einstein"			/2
	//./app "albertus onepierre" prête	/3
	//./app 3.14 2.71828 9				/4

	// first step : check the number of arguments
	if (argc != 3)
	{
		printf(" Error , bad number of arguments\n"); 
		return 1;
	}
	//Récuperer valeur des arguments
	//argc = 3 pour ./app 10 20
	//const char* argv[]
	//contenu non modifiable , chaine de character , nom de la variable (tableau)
	// argv[1] = 10 
	// argv[2] = 20

	//all in string values
	printf(" argv[1] = %s\n", argv[0]); 
	printf(" argv[2] = %s\n", argv[1]); 
	printf(" argv[3] = %s\n", argv[2]);
	n = atof(argv[2]); // atoi = entier 
	n = 2*n;
	printf(" n = argv[2]*2 = %lf\n", n);
	#endif


	//Incrémentation

	int i = 42;
	// opérateur post incrémentation
	i++;
	printf("i = %d", i);

	//opérateur de pré incrémentation
	i++;

	i = 57;
	int j = 0;
	printf("j = %d", j);

	j = i++;
	printf("i = %d", i);
	printf("j = %d", j);
//---------------------------------------------------------
	i = 57;
	int j = 0;
	printf("j = %d", j);

	j = ++i;
	printf("i = %d", i);
	printf("j = %d", j);



//------------------------------------------
	i = i + 1;
	i += 1;
	
	return 0;
}