#include <stdio.h>
#include <math.h>
int main ()
{
   int n, t, m, i;
   double x, sum, av;
   char ch;
   scanf (" %d", &n);
   scanf (" %c", &ch);
   sum = 0;
   n = n * 12;
   for (i = 0; i < 144; i++) {
      scanf (" %lf", &x);
      if (i >= n && i < n+12)
         sum += x;
   }
   av = sum / 12;
   if (ch == 'S') printf ("%.1lf\n", sum);
   else if (ch == 'M') printf ("%.1lf\n", av);
   return 0;
}
