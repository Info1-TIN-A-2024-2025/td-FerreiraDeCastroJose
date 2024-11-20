#include <math.h>
#include <stdio.h>


int main(int argc, const char *argv[])
{
	int i = 0;
	int cnt = 0;
	const int DIVIDER = 10;
    printf("valeur i : ");
	scanf("%d", &i);
    /*do
	{        
        i = i / DIVIDER;
        if (i!=0)
        {
		    cnt++;
        }
	} while (i != 0);
	printf("on peut DIVIDER %d fois par 10", cnt);*/
    while (i > DIVIDER);
    {        
        i = i / DIVIDER;
        if (i!=0)
        {
		    cnt++;
        }
	}
	return 0;
}