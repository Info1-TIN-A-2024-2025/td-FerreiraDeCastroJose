#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


double generate_random_real_value(const double min_value, const double max_value);
double compute_distance_2D(const double x1, const double y1, const double x2, const double y2);

int main(int argc, char* argv[])
{
  const double PI = 3.14159265358979;
  //---------------HELP-------------------
  if (argc < 2)
  {
    printf("Bad option.");
    return 2;
  }
  if ((strcmp(argv[1], "-h") == 0) && (argc == 2))
  {

    printf("usage: ./app -h\n   or  ./app <n> <precision>\n\n");
    printf("   compute the value of pi using the Monte Carlo method.\n");
    printf("   where <n> is the maximum number of iterations and <precision>\n");
    printf("   is the minimum error in absolute value required for the computation.\n");
    printf("   the software ends when one of the constraint is reached.\n");
    return 0;
  }
  //Test d'erreur
  if (argc > 3)
  {
    printf("Bad option.");
    return 2;
  }
  if ((strcmp(argv[1], "0") == 0) &&(strcmp(argv[2], "0") == 0))
  {
    printf("Bad option.");
    return 2;
  }
  //Lire valeur + erreur
  int n = 0; // nbr itération
  if((sscanf(argv[1], "%d", &n) != 1)||(n<0))
  {
    printf("Bad option.");
    return 2;
  }

  double precision = 0; // Précision souhaité
  if((sscanf(argv[2], "%lf", &precision) != 1)||(precision < 0))
  {
    printf("Bad option.");
    return 2;
  }
  double Nbr = 0; //nbr d'itération effectué
  double Inside = 0; //nbr d'itération effectué
  srand(0);
  //---------------------------------------------------------------------------------
  if (n == 0)
  {
  while(1)
    {
      Nbr++;
      if(compute_distance_2D(0,0,generate_random_real_value(0,RAND_MAX),generate_random_real_value(0,RAND_MAX))<1)
      {
        Inside++;
      }
      if((fabs(PI - (Inside/Nbr*4))<=(precision)))
      {
        break;
      }
    }
    printf("* Err  = %.15lf\n",(fabs(PI - (Inside/Nbr*4))));
    printf("  PI   = %.15lf\n",(Inside/Nbr*4));
    
  }
  //---------------------------------------------------------------------------------
  if (precision == 0)
  {
  while(Nbr < n)
    {
      Nbr++;
      if(compute_distance_2D(0,0,generate_random_real_value(0,RAND_MAX),generate_random_real_value(0,RAND_MAX))<1)
      {
        Inside++;
      }
    }
    printf("* Iter = %lf\n",Nbr);
    printf("  PI   = %.15lf\n",(Inside/Nbr*4));
  }
  //---------------------------------------------------------------------------------
  if ((n != 0)&&(precision != 0))
  {

    while(Nbr < n)
    {
      Nbr++;
      if(compute_distance_2D(0,0,generate_random_real_value(0,RAND_MAX),generate_random_real_value(0,RAND_MAX))<1)
      {
        Inside++;
      }
      if((fabs(PI - (Inside/Nbr*4))<=(precision)))
      {
        break;
      }
    }
    (Nbr==n)?printf("* Iter = %lf\n",Nbr):printf("  Iter = %lf\n",Nbr);
    ((fabs(PI - (Inside/Nbr*4))<=(precision)))?printf("* Err  = %.15lf\n",(fabs(PI - (Inside/Nbr*4)))):printf("  Err  = %.15lf\n",(fabs(PI - (Inside/Nbr*4))));
    printf("  PI   = %.15lf\n",(Inside/Nbr*4));

  }
  return 0;
}


double generate_random_real_value(const double min_value, const double max_value)
{
 
  double Diff = 0;
  double decalage = 0;
  Diff = max_value - min_value;
  Diff = Diff * ((double)rand()/(double)RAND_MAX);
  decalage = Diff + min_value;

  return (decalage);
}
double compute_distance_2D(const double x1, const double y1, const double x2, const double y2)
{
  double diff_x = 0;
  double diff_y = 0;
  diff_x = x2-x1;
  diff_y = y2-y1;
  //retourne la distance entre les 2 points
  return  (sqrt(pow(diff_x,2)+pow(diff_y,2)));

}
