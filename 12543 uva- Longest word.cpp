#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
int main()
{
   char s[1000], t[1000];
   int i, j, k, len, m = 0, p;
   //freopen ("in.txt", "r", stdin);
   while (cin >> s) {
      if (strcmp (s, "E-N-D") == 0) break;
      len = 0;
      k = 0;
      for (i = 0; s[i]; i++) {
         if (s[i] >= 'A' && s[i] <= 'Z') {s[i] += 32; len++;}
         else if ((s[i] >= 'a' && s[i] <= 'z') || s[i] == '-' ) len++;
      }
      if (len > m) {
         m = len;
         for (j = 0; s[j]; j++) t[j] = s[j];
         t[j] = '\0';
      }
   }
   for (i = 0; t[i]; i++) {
      if ((t[i] >= 'a' && t[i] <= 'z') || t[i] == '-' ) cout << t[i];
   }
   cout << "\n";
   return 0;
}
