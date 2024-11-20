#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char *argv[])
{
    if ((argc == 2)&&((strcmp(argv[1], "-h") == 0)||((strcmp(argv[1], "tire") == 0)&&strcmp(argv[1], "distance"))))
    {
        printf("usage\n");
        printf("-h\n");
        printf("tire\n");
        printf("distance\n");
        return 0;
    }

    if (argc < 3)
    {
        printf("error");
        return 1;
    }
    if (argc > 3)
    {
        printf("error");
        return 2;
    }

    double diametre = 0;
    double Flon = 0;
    double Pouce = 0;
    double Km = 0;
    if (sscanf(argv[1], "%lf/%lfR%lf", &diametre, &Flon, &Pouce) != 3 || sscanf(argv[2], "%lf", &Km) != 1)
    {
        printf("error");
        return 4;
    }

    if ((Pouce <= 1) || (Flon <= 1) || (diametre <= 1)|| (Km < 1 ))
    {
        printf("error");
        return 4;
    }

    const double pi = 3.141592653;
    double diamètre_tot = ((Pouce * 25.4) + (2 * (Flon*diametre))/100)/10; 
    double perimetre = diamètre_tot * pi /100; 
    double Rotation = (Km * 1000) / perimetre; 

    printf("Diamètre total = %.2lfcm\n", diamètre_tot);
    printf("Périmètre total = %.2lfm\n", perimetre);
    printf("Rotation totale = %.1lf tours\n", Rotation);

    return 0;
}
