#include <stdio.h>
int main ()
{
   long long n, i;
   while (scanf (" %lld", &n) == 1) {
      i = (n * (n+1)) / 2; //Summation of cubic sequenced series = (n(n+1)/2)^2..
      i = i * i;
      printf ("%lld\n", i);
   }
   return 0;
}

