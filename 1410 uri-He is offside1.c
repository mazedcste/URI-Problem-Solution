#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
   int n, m, i, a, d, c;
   while (scanf (" %d %d", &m, &n)) {
      if (m == 0 || n == 0) break;
      a = 10000;
      for (i = 0; i < m; i++) {
         scanf (" %d", &c);
         if (c < a) a = c;
      }
      d = 0;
      for (i = 0; i < n; i++) {
         scanf (" %d", &c);
         if (c <= a) d++;
      }
      if (d >= 2) printf ("N\n");
      else printf ("Y\n");
   }
   return 0;
}
