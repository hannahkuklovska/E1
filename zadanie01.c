#include <stdio.h>

#define TOL 0.0001
#define abs(n) (((n) < 0) ? -(n) : (n))
#define OK 1
#define FAIL 0

double mocnina(double mocnenec, int exponent);

char mta_odmocnina(int m, double x, double *res) // mta odmocnina z x
{
     if (x < 0 && m % 2 == 0 || m == 0)
     {
          return FAIL;
     }

     else if (m == 1)
     {
          *res = 1.0;
          return OK;
     }

     double odhad = x / 2.0;
     double dalsi_odhad;
     do
     {
          dalsi_odhad = ((m - 1) * odhad + x / mocnina(odhad, m - 1)) / m;
          odhad = dalsi_odhad;

     } while (abs(mocnina(dalsi_odhad, m) - x) > TOL);

     *res = odhad;
     return OK;
}

double mocnina(double mocnenec, int exponent)
{

     if (exponent == 0 || mocnenec == 1.0)
          return 1.0;

     double mocnina_res = 1.0;
     if (exponent > 0)
     {
          for (int i = 0; i < exponent; i++)
          {
               mocnina_res *= mocnenec;
          }
     }

     else if (exponent < 0)
     {
          exponent = -exponent;
          mocnenec = 1.0 / mocnenec;
          for (int i = 0; i < exponent; ++i)
          {
               mocnina_res *= mocnenec;
          }
     }

     return mocnina_res;
}

int main(void)
{
     double x = 25;
     int m = 2;
     double res;

     printf("%.4f\n", mocnina(5, 2));

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
