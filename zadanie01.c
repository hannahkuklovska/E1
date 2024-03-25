#include <stdio.h>

#define TOL 0.0001                      // presnost na 4 desatinne miesta
#define abs(n) (((n) < 0) ? -(n) : (n)) // absolútna hodnota funkcia
#define OK 1
#define FAIL 0

char mocnina(double mocnenec, double exponent);

char mta_odmocnina(int m, double x, double *res) // mta odmocnina z x
{
     if (x < 0 && m % 2 == 0 || m == 0)
     {
          return FAIL;
     }

     *res = mocnina(x, -m);

     return OK;
}

char mocnina(double *mocnenec, double *exponent, double *moc_res)
{
     *moc_res = 1.0;

     if (exponent == 0)
          return 1.0;
     else if (exponent < 0)
     {
          exponent = -exponent;
          mocnenec = 1.0 / mocnenec;
     }
     for (int i = 0; i < exponent; ++i)
     {
          vysledok *= mocnenec;
     }

     return vysledok;
}

int main(void)
{
     double x = 4;
     int m = -2;
     double res;

     printf("%.4f\n", mocnina(x, -3));

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
