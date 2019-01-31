#include <stdio.h>
int main()
{
double a=1,d;
int b= 1,c=1;
do
{
c*=b;
b++;
d = 1.0/c;
a += d;
}while(d>=1e-6);
printf("%.6lf",a);
return 0;}
