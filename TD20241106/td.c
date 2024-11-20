#include <math.h>
#include <stdio.h>


int main(int argc, const char *argv[])
{
	int i = 0;

    do
	{        
        printf("insérez une valeur i plus grande que 0 : ");
	    scanf("%d", &i);


        
        while (getchar() != '\n');

    } while (!(i>0));
	printf("i = %d et elle va monter jusqu'à 100 depuis 0 \n", i);
    for (i = 0; i < 100; i++)
    {
        printf("i = %d \n", i);

    }

    	printf("i = %d ", i);
        double x = 0;
        for (x = 10; x >= 0; x = x - 1e-4)
        {
            printf("X = %lf \n", x);
        }

	    const double pi = 3.1415;
	    const int a = 4;
	    const int alpha_start = 0;
	    const int alpha_end = 2*pi;
	    int n = 13;
	    double step = (alpha_end-alpha_start)/(n-1);

        for (x = 0; x <= 2*pi ; x += step)
        {
            printf("sin(X) = %lf \n", a*sin(x));
        }
	return 0;
}