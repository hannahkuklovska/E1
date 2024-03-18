#include <stdio.h>

#define TOL 0.0001                      // presnost na 4 desatinne miesta
#define abs(n) (((n) < 0) ? -(n) : (n)) // absolútna hodnota funkcia
#define OK 1
#define FAIL 0

double mta_odmocnina(int m, double x);
double mocnina(double mocnenec, double exponent);

int main(void)
{
     double x;
     int m;
     printf("%lf", mta_odmocnina(3, 8));
     return 0;
}

double mta_odmocnina(int m, double x, double *res) // mta odmocnina z x
{
     if (m == 0)
     {
          printf("Chyba: nultá odmocnina z čísla.");
          return -1;
     }

     if (x < 0 && m % 2 == 0)
     {
          printf("Chyba: párna odmocnina zo zaporného čísla.\n");
          return -1;
     }

     double vysledok = x / (double)m;
     while (abs(mocnina(m, vysledok) - x) > tol)
          ;
     {
          vysledok -= tol;
     }

     return vysledok;
}

double mocnina(double mocnenec, double exponent)
{
}
