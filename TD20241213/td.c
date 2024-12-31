#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
double generate_random_real_value(const double min_value, const double max_value);
void initArray(double *Tableu,int Size);

int main()
{
    srand(0);
    const int n = 100000;
    
    
    double Tabloue[n];  
    initArray(Tabloue,n);
    //notation pointeur = (a+1)
    double PATRICK[n][n];// [LIGNE][COLONNE]
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
void initArray(double *Tableu,int Size)
{
    double sum = 0;
    const int mini = -40;
    const int maxi = 42;
    for (int i = 0; i < Size;i++)
    {
        
        Tableu[i] = generate_random_real_value(mini,maxi);
        printf("%lf\n",Tableu[i]);
        sum = Tableu[i] + sum;
    }
    printf("moyenne = %lf\n",sum/Size);
}
