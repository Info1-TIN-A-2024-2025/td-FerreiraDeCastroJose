#include <stdio.h>
__int8_t Habla = 0;

int main(int argc, const char *argv[])
{
	Habla++; /* code */
	if (Habla !=0)
	{
		puts("Podemos trabalhar juntos!");
		if (Habla > 1)
		{
			Habla = 0; /* code */	
			printf("No habla spanish");
		}
	}
	return 0;
}