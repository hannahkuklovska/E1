#include <stdio.h>

#define tol 0.0001                      // presnost na 4 desatinne miesta
#define abs(n) (((n) < 0) ? -(n) : (n)) // absolútna hodnota funkcia

int main(void)
{
     double x;
     int m;

     return 0;
}

double mta_odmocnina(int m, double x) // mta odmocnina z x
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
}
