#include <stdio.h>
#include <stdlib.h>

int main()
{

float m,n,a,sum=0;
int i;
n=1.0;
m=2.0;
for(i=1;i<=50;i++)
{
sum+=m/n;
a=n+m;
n=m;
m=a;
}
printf("%.2f",sum);
return 0;
}
