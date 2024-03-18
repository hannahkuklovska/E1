#include <stdio.h>

#define TOL 0.0001                      // presnost na 4 desatinne miesta
#define abs(n) (((n) < 0) ? -(n) : (n)) // absolútna hodnota funkcia
#define OK 1
#define FAIL 0

char mta_odmocnina(int m, double x, double *res) // mta odmocnina z x
{
     if (m == 0)
     {
          return FAIL;
     }

     if (x < 0 && m % 2 == 0)
     {
          return FAIL;
     }

     double vysledok = x / (double)m;
     while (abs(mocnina(m, vysledok) - x) > TOL)
          ;
     {
          vysledok -= TOL;
     }

     return vysledok;
}

double mocnina(double mocnenec, double exponent)
{
     if (exponent == 0)
          return 1;
     else if (exponent < 0)       // mocnina(mocnenec, -exponent)
          else if (exponent == 1) // mocnina(mocnenec, 1)
}

int main(void)
{
     double x = 8;
     int m = 3;
     double res;

     int navrat = mta_odmocnina(m, x, &res);

     if (navrat == OK)
     {
          printf("Výsledok: %.4f\n", res);
     }
     else
     {
          printf("Chyba: Nie je možné vypočítať odmocninu");
     }

     return (0);
}
