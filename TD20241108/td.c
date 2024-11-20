#include <math.h>
#include <stdio.h>


int main(int argc, const char *argv[])
{
    printf("Math bien révisez (O/N) ? ");
    char answer = getchar();

    // Si pas de break; , le switch continuera à lire jusqu'à un break 
    //ATTENTION SI MARQUE OUI , IL Y AURA PAS DE PROBLEME MAIS L'ENTRE EST FAUSSE
    switch (answer)
    {
    case 'O': // oui  Multilangue
    case 'J': // Multilangue
    case 'D': // Multilangue
    case 'S': // Multilangue
    case 'E': // Multilangue
    case 'Y': // Multilangue
        puts("OK");
        break;
    case 'N':
    case 'H':
        puts("NOP");
        break;
    default:
        puts("??");
        break;
    }
    goto LABAS;
    // Faut vider le buffer si on utilise le scanf à nouveau ou autre raison
    int i = 0;
    while (getchar() != '\n')
	{
        i = getchar();
    }
    LABAS:
        printf("c'est très bas\n");

    for (i = 0; i < 42; i++)
    {
        if (i%7 != 0)
        {
            printf("%d ", i);
        }
    }
        printf("\n test manière 2 avec continue \n");

    for (i = 0; i < 42; i++)
    {
        if (i%7 == 0)
        
            continue;//sort du bloc
        printf("%d ", i);

    }
        printf("\n test manière 3 mais i = 1 avec break \n");

    for (i = 1; i < 42; i++)
    {
        if (i%7 == 0)
            break;//sort de la boucle  // SI PAS DE {} LE IF LIT QU'UNE LIGNE
        printf("%d ", i);

    }
    int x = 0;
    int y = 0;

    //Possible
    if (((-1 > x)&&(x > 0))||((1 > x)&&(x > 2)))          y = 0;     else         y = 1;

    y = (((-1 > x)&&(x > 0))||((1 > x)&&(x > 2))) ? 1 : 0;
        //si blabla?vrai alors 0 sinon : 1
        //opération ternaire

    //afficher la question
    y = 0;
    printf("\n");
    printf("Combien de chat avez-vous ?");
    scanf("%d", &y);
    printf("\n");
    printf("vous avez %d %s", y, (((y == 1)||(y == 0)) ? "chat" : "chats"));
    return 0;

    //if goto , note = -1
}