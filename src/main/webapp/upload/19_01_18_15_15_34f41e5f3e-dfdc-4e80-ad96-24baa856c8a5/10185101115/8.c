#include <stdio.h>
#include <stdlib.h>
int main()
{unsigned int m,n;
scanf("%u %u",&n,&m);
int i=1;
int p=n;
while (p/10!=0)
{
    p=p/10;
    i++;
}
printf("%d ",i);
int j;
int k=1;
int t=m%i;
for(int j=1;j<=t;j++)
{
    k=k*10;
}
int a=n%k;
int b=n/k;
if(b==0)
{
    printf("%d",a);
}
else
{
    printf("%d%d",a,b);
}
return 0;
}