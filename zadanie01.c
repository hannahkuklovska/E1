#include <stdio.h>

#define TOL 0.0001
#define abs(n) (((n) < 0) ? -(n) : (n))
#define OK 1
#define FAIL 0

double mocnina(double mocnenec, double exponent);

char mta_odmocnina(int m, double x, double *res) // mta odmocnina z x
{
     if (x < 0 && m % 2 == 0 || m == 0)
     {
          return FAIL;
     }

     *res = mocnina(x, 1.0 / (double)m);

     return OK;
}

double mocnina(double mocnenec, double exponent)
{

     if (exponent == 0 || mocnenec == 1.0)
          return 1.0;

     if (exponent != (int)exponent)
     {
          double zvysok = exponent - (int)exponent;
          double umocnenie_int = mocnina(mocnenec, (int)exponent);
          double pomoc = 1.0;

          for (int i = 1; pomoc > TOL; i++)
     }

     double moc_res = 1.0;

     if (exponent > 0)
     {
          for (double i = 0; i < exponent; i = i + TOL)
          {
               moc_res *= mocnenec;
          }
     }

     else if (exponent < 0)
     {
          exponent = -exponent;
          mocnenec = 1.0 / mocnenec;
          for (int i = 0; i < exponent; ++i)
          {
               moc_res *= mocnenec;
          }
     }

     return moc_res;
}

int main(void)
{
     double x = 2;
     int m = 16;
     double res, moc_res;

     printf("%.4f\n", mocnina(5, 2));
     printf("%.4f\n", mocnina(25, 1.0 / 2));

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
