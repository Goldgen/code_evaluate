#include <stdio.h>
#include <math.h>
int main()
{
int n,m,i,d,e,a;
scanf("%d %d",&n,&m);
long long c;
c=n;
if(n<=9)
    i=1;
else
{for(i=1;n/10>=10;i++)
{
    n=n/10;
}
i=i+1;
}
a=m%i;
for(int b=1;b<=m;b++)
{   d=c%10;
    e=(c-d)/10;
    for(int g=1;g<i;g++)
            d=d*10;
            c=d+e;
 }
printf("%d %lld",i,c);
}