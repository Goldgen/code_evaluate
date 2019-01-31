#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
int c=1;
scanf("%d %d",&a,&b);
int d=a;
while(a/10>=1)
{
    c++;
    a=a/10;
}
printf("%d ",c);
b=b%c;
double e=pow(10,b);
double f=pow(10,c-b);
int x,y;
x=d/e;
y=d%(long long)e;
d=y*f+x;
printf("%d",d);


return 0;
}
