#include <stdio.h>
int main ()
{
   double ara[12][12];
   int i, j, c;
   double av, sum;
   char ch;
   scanf (" %c", &ch);
   c = 0;
   sum = 0;
   for (i = 0; i < 12; i++) {
      for (j = 0; j < 12; j++) {
         scanf (" %lf", &ara[i][j]);
         if (j > i)  {
            sum += ara[i][j];
            c++;
         }
      }
   }
   av = sum / (double) c;
   if (ch == 'S') printf ("%.1lf\n", sum);
   else if (ch == 'M') printf ("%.1lf\n", av);
   return 0;
}
