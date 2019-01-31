#include <stdio.h>
#include <stdlib.h>
int main()
{
long n,x;
int i,j,m,a,k,y;
scanf("%ld %d",&n,&m);
i=1;
j=0;
x=1;
y=1;
k=1;
while((n-i)>=0)
{
i=i*10;
j=j+1;
}
while (y<=(j-1))
{
x=x*10;
y=y+1;
}
for(k=1;k<=m;k=k+1)
{
a=n%10;
n=(n-a)/10+a*x;
}
printf("%d %ld",j,n);
return 0;
}
