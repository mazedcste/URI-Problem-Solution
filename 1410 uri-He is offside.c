#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
   int n, m, i, a, d1, d2, c;
   while (scanf (" %d %d", &m, &n)) {
      if (m == 0 || n == 0) break;
      a = 10000;
      for (i = 0; i < m; i++) {
         scanf (" %d", &c);
         if (c < a) a = c;
      }
      d1 = 10000; d2 = 10000;
      for (i = 0; i < n; i++) {
         scanf (" %d", &c);
         if (c < d1) {
            d2 = d1;
            d1 = c;
         }
         else if (c < d2) d2 = c;
      }
      if (a >= d2) printf ("N\n");
      else printf ("Y\n");
   }
   return 0;
}
