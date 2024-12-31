#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    /*char t[2];
    t[0] = 'o';
    t[1] = 'k'; //Pas une chaine mais un tableau de character ne fini pas par \0
    // le printf("%s",t) ne fonctionnera pas , car c'est un tableau de character et pas une chaine
    //  Si t[3]= '\0'; alors là ca fonctionnera */
    char S1[] = "POKLOPAC MALI"; // clairement je fais insulté de couverture
    printf("what's inside ? %s\n", S1);
    printf("Longeur de la chaine %lu\n", strlen(S1));   //= 13
    printf("Longeur de du tableau %ld\n", sizeof(S1));  //= 14

    char S2[100] = "POKLOPAC MALI";
    printf("Longeur de la chaine %lu\n", strlen(S2));   //= 13
    printf("Longeur de du tableau %ld\n", sizeof(S2));  //= 100

    char *S3 = "POKLOPAC MALI";
    printf("Longeur de la chaine %lu\n", strlen(S3));   //= 13
    printf("Longeur de du tableau %ld\n", sizeof(S3));  //= 8 // taille de l'adresse donc 8 octet

    char nomdediou[100] ;
    printf("Enter your name : ");
    //scanf("%s",nomdediou); //Albert Einstein // s'arrête à l'espace ( problème de scanf)
    //gets(nomdediou); //deprecated / abandonner car problème d'overflow car écrase les adresses suivantes ( détruit tout )

    fgets(nomdediou, 100, stdin); // char , taille , d'ou vient
    printf("%s\n", nomdediou);
    fprintf(stderr, "send dudes\n");
    // sscanf(CHAINE DE CHARACTER , %S LE TRUC QUE TU VEUX DEPUIS LA CHAINE , &NOUVEL VARIABLE)

    char AudiTT[2][4] = {"KYS", "Ye"};
    // 2 éléments de 4 character
    printf("Would you %s , %s\n", AudiTT[0], AudiTT[1]);

    char *daso[] = {"why", "are", "you" , "so cringe", "use brainrot Language"};
    printf(" %s %s %s %s", daso[0], daso[2],daso[4],daso[3]);
}
