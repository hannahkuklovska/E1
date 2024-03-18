#include <stdio.h>

#define TOL 0.0001                      // presnost na 4 desatinne miesta
#define abs(n) (((n) < 0) ? -(n) : (n)) // absolútna hodnota funkcia
#define OK 1
#define FAIL 0

double mta_odmocnina(int m, double x, double *res);
double mocnina(double mocnenec, double exponent);

int main(void)
{
     double x;
     int m;
     return OK;
}

double mta_odmocnina(int m, double x, double *res) // mta odmocnina z x
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
}
