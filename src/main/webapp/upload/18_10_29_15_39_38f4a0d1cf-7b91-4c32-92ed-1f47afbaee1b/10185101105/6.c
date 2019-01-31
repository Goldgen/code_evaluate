#include <stdio.h>
#include <stdlib.h>
int main()
{
int m,n,a,r;
scanf("%d %d",&m,&n);
if(m<n)
{
r=m;
m=n;
n=r;
}
while(m%n!=0)
{
a=m%n;
m=n;
n=a;
}
printf("最大公约数是: %d",n);
return 0;
}
