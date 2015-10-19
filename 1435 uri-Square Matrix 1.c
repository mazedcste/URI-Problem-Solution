#include <stdio.h>
#include <math.h>
int main ()
{
   int i, j, n, m, p, q;
   while (1) {
      scanf (" %d", &n);
      if (n == 0) break;
      m = ceil (n/2.0);
      for (i = 0, p = 0; i < n; i++) {
         if (i < m) p++;
         else if (i > m) p--;
         else if (i == m && n %2 == 1) p--;
         else if (i == m && n %2 == 0) p = p;

         for (j = 0, q = 0; j < n; j++) {
            if (j < m) q++;
            else if (j > m) q--;
            else if (j == m && n %2 == 1) q--;
            else if (j == m && n %2 == 0) q = q;
            if (j == n-1) {
               if (p < q) printf ("%3d", p);
               else printf ("%3d", q);
               continue;
            }
            if (p < q) printf ("%3d ", p);
            else printf ("%3d ", q);
         }
         printf ("\n");
      }
      printf ("\n");
   }
   return 0;
}
