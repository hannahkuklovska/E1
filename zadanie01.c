#include <stdio.h>

#define TOL 0.0001
#define abs(n) (((n) < 0) ? -(n) : (n))
#define OK 1
#define FAIL 0

int mocnina(int mocnenec, int exponent);

char mta_odmocnina(int m, int x, double *res) // mta odmocnina z x
{

     double odhad;
     double dalsi_odhad;

     if (x < 0 && m % 2 == 0 || m == 0)
     {
          return FAIL;
     }

     else if (m == 1)
     {
          *res = x;
          return OK;
     }

     odhad = x / 2.0;

     do
     {
          dalsi_odhad = ((m - 1) * odhad + x / mocnina((int)odhad, m - 1)) / m;
          odhad = dalsi_odhad;

     } while (abs(mocnina((int)dalsi_odhad, m) - x) > TOL);

     *res = odhad;
     return OK;
}

int mocnina(int mocnenec, int exponent)
{

     int mocnina_res;
     int i;

     if (exponent == 0 || mocnenec == 1)
          return 1;

     mocnina_res = 1;
     if (exponent > 0)
     {
          for (i = 0; i < exponent; i++)
          {
               mocnina_res *= mocnenec;
          }
     }

     else if (exponent < 0)
     {
          exponent = -exponent;
          mocnenec = 1 / mocnenec;
          for (i = 0; i < exponent; ++i)
          {
               mocnina_res *= mocnenec;
          }
     }

     return mocnina_res;
}

int main(void)
{
     int x;
     int m;
     double res;
     int navrat;

     x = 25;
     m = 3;

     printf("%d\n", mocnina(10, 2));

     navrat = mta_odmocnina(m, x, &res);

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
