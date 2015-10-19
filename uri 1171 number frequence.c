#include <stdio.h>

int main()
{
   int first[2010] = {0}, i, n;
   scanf("%d", &n);
   int a[n];
   for(i = 0; i < n; i++) {
      scanf(" %d", &a[i]);
      first[a[i]]++;
   }
   for (i = 0; i < 2000; i++)
   {
      if(first[i] > 0)
         printf("%d apparece %d vez (es)\n", i, first[i]);
   }
   return 0;
}
