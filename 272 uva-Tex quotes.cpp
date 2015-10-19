#include <stdio.h>
#include <string.h>
int main ()
{
   char s[100000];
   int i, j, k, t = 1;
   //freopen ("in.txt", "r", stdin);
   while (scanf (" %[^\n]s", s) != EOF) {
      for (i = 0; s[i]; i++) {
         if (s[i] == '"' && t == 1) {
            printf ("``");
            t = 2;
         }
         else if (s[i] == '"' && t == 2) {
            printf ("''");
            t = 1;
         }
         else printf ("%c", s[i]);
      }
      printf ("\n");
   }
   return 0;
}
