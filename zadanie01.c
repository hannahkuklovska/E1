#include <stdio.h>

#define TOL 0.0001                      // presnost na 4 desatinne miesta
#define abs(n) (((n) < 0) ? -(n) : (n)) // absolútna hodnota funkcia
#define OK 1
#define FAIL 0

double mocnina(double mocnenec, double exponent);

char mta_odmocnina(int m, double x, double *res) // mta odmocnina z x
{
     if (x < 0 && m % 2 == 0 || m == 0)
     {
          return FAIL;
     }

     *res = mocnina(x, 1.0 / m);

     return OK;
}

double mocnina(double mocnenec, double exponent)
{
     double vysledok = 1.0;

     if (exponent == 0)
          vysledok = 1.0;
     else if (exponent < 0)
     {
          exponent = -exponent;
          mocnenec = 1.0 / mocnenec;
     }
     while (exponent > 0)
     {
          vysledok *= mocnenec;
          exponent--;
     }

     return vysledok;
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
