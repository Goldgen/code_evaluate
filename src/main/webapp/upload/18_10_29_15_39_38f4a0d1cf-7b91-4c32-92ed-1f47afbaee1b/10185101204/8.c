#include <stdio.h>
int main()
{long long int i=1,j=0,m=0,n=0,b=1,a=0,k=1,p=1;

scanf("%lld %lld",&n,&m);
while((n-i)>=0)
   {i*=10;
    j++;}
while(p<=(j-1))
   {b*=10;
    p++;}
m=m%j;
for(k=1;k<=m;k++)
    {a=n%10;
     n=(n-a)/10.0+a*b;}
printf("%lld %lld",j,n);
    return 0;
}