#include <stdio.h>
#include <stdlib.h>
int ascending(void const *a, void const *b) {
   return (*(int*)a - *(int*)b );
}
int main ()
{
   int n, i, j, c, m;
   scanf(" %d", &n);
   int ara[n];
   for (i = 0; i < n; i++) scanf(" %d", &ara[i]);
   qsort(ara, n, sizeof(int ), ascending);
   //for (i = 0; i < n; i++) printf (" %d", ara[i]);
   m = ara[0];
   c = 0;
   for (i = 0; i < n; i++) {
      if (m == ara[i]) c++;
      else {
         printf ("%d aparece %d vez(es)\n", m, c);
         m = ara[i];
         c = 1;
      }
      if (i == n-1) printf ("%d aparece %d vez(es)\n", m, c);
   }
   return 0;
}
