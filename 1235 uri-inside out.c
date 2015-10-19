#include <stdio.h>
#include <string.h>
int main ()
{
   char s[10000];
   int cas, i, j, k, len, temp;
   //freopen ("in.txt", "r", stdin);
   scanf (" %d", &cas);
   gets(s);
   while (cas--) {
      gets(s);
      len = strlen(s);
      //printf ("%d\n", len);
      if (len %2 == 1) len = (len+1) / 2;
      else len = len / 2 ;
      for (i = len-1; i >= 0; i--) {
         printf ("%c", s[i]);
      }
      for (i = strlen(s) -1; i >= len; i--) {
         printf ("%c", s[i]);
      }
      printf ("\n");
   }
   return 0;
}
