#include <stdio.h>
#include <string.h>
int main ()
{
   int cas, i, j, k, n, m, p, q;
   char s[100000], t[100000];
   int ara[20];
   //freopen ("out.txt", "w", stdout);
   scanf (" %d", &cas);
   while (cas--) {
      scanf (" %d", &n);
      q = 0;
      for (i = 2, p = 0; i <= 16; i++) {
         m = n;
         j = 0;
         while (m != 0) {
            s[j] = (m %i) + 48;
            m /= i;
            j++;
         }
         s[j] = '\0';
         for (j = j-1, k = 0; j >= 0; j--, k++) {
            t[k] = s[j];
         }
         t[k] = '\0';
         if (strcmp (s, t) == 0) {
            ara[q] = i;
            q++;
            p = 1;
         }
      }
      if (p == 0) printf ("-1");
      else {
         for (k = 0; k < q; k++) {
            if (k != q-1) printf ("%d ", ara[k]);
            else printf ("%d", ara[k]);
         }
      }
      printf ("\n");
   }
   return 0;
}
