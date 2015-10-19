#include <stdio.h>
int main ()
{
int ara[100000];
int n, i, j, t, m, count;
while (scanf (" %d", &n) == 1) {
count = 0;
for (i = 0; i < n; i++) scanf(" %d", &ara[i]);
m = n;
for (j = 0; j < m; j++) {
for (i = 0; i < m-1; i++) {
if (ara[i] > ara[i+1] ) { //swarping
count++;
t = ara[i];
ara[i] = ara[i+1];
ara[i+1] = t;
}
}
}

printf ("Minimum exchange operations : %d\n", count);
}
return 0;
}
