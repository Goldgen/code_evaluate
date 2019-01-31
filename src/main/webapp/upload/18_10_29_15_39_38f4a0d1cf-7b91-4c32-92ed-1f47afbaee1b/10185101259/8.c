#include <stdio.h>

int main()
{
int a,b,x,y;
int i=1;
double e=pow(10,b);
double f=pow(10,i-b);
scanf("%d %d",&a,&b);
int d=a;
while(a/10>=1)
{i++;
a=a/10;
}
printf("%d ",i);
b=b%i;
x=d/e;
y=d%(long long)e;
d=y*f+x;
printf("%d",d);
return 0;}
