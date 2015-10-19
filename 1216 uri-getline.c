#include <stdio.h>
int main()
{
   double av;
   int i, c, a, x;
   char s1[100];

   x = 0;
   c = 0;
   while (scanf (" %[^\n]s", s1) != EOF) {
      scanf(" %d", &a);
      x = x + a;
      c++;
   }
   av = (double) (x / (double) c);
   printf("%.1lf\n", av);
   return 0;
}
