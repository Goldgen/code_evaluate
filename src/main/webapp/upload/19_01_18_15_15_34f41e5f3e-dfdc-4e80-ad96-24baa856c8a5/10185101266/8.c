#include <stdio.h>
#include <stdlib.h>
int main()
{
long long n,b;int i,j,m,a,k,l;
scanf("%lld %d",&n,&m);
i=1;
j=0;
b=1;
l=1;
k=1;
while((n-i)>=0)
{
i=i*10;
j=j+1;
}
while (l<=(j-1))
{
b=b*10;
l=l+1;
}
for(k=1;k<=m;k=k+1)
{
a=n%10;
n=(n-a)/10.0+a*b;
}
printf("%d %lld",j,n);
return 0;
}
