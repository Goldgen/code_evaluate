#include <stdio.h>
int main( )
{
double sum = 1, n = 1;
int t = 1;
while ( 1 / n >= 1e-6 )
{
sum+=1/n;
t++;
n=n*t;
}
printf("%.6f", sum);
return 0;
}
