#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void HelloWourld(void);

int main(int argc, char* argv[])
{
  HelloWourld();
  
  const char PasUneConstant[] = "WTF IS A KILOMETER";

  printf("%s\n",PasUneConstant);

  double x = 3.5;
  int y = (int)x;
    printf("%d \n", y);

  short w = 0x03E8;
  short *v = &w;//adresse de w
  printf("%d \n", w);
  printf("%p \n", v);

  char *u = (char*)v;
  printf("%d \n", *u);

  int ref = 0;
  int ah = 0;
  int baie = 0;
  int CD = 0;
  ref = scanf("%d %d %d", &ah, &baie, &CD);
  printf("ref = %d\n A = %d\n B =  %d\n C = %d\n", ref, ah, baie, CD);
  //REF = NBR DE VARIABLE MIS à Jour
  if (ref!=3)
  {
    printf("Fin fréro t'as pas mis de bonne valeur \n");
  }

  //TERNAIRE
  int Père = 34124;
  int UnPère = 2;
  int Vert = 2;

  printf(Père % UnPère != 0 ? "impaire\n" : "Paire\n");
  printf("%d chat%s", Père / UnPère, Vert < 2 ? "" : "s");
  return 0;

}
void HelloWourld(void)
{
  printf("Hellow Our lord\n");
  return;
}
