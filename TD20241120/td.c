#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double mult_by_two(double j);

void noterror(void);

int random(void);

int main(int argc, const char *argv[])
{
	double x = 0;
 	if (sscanf(argv[1], "%lf", &x) != 1)
    {
        printf("error");
        return 1;
    }
	double y;
	y = mult_by_two(x); //si pas de void blabla(double ff)  --> void blabla(void) can still reply by true return 1 or false return 0
	printf("y = %lf\n", y);


	noterror();
	int j = random();
	printf("FF15 = %d", j);

	return 0;
}

void noterror(void)
{
	 printf("not an error\n");
}

double mult_by_two(double j)
{
	j = j * 2;
	return j;
}

int random(void)
{
	double  k = 0;
	k = rand();
	return k;
}