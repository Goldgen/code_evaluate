#include <stdio.h>
#include <stdlib.h>
int main()
{long int a,b,c,n,m,t;
scanf("%ld+%ld=%ld",&a,&b,&c);
t=a+b;
if(t==c)
{printf("0");
return 0;}
m=a;
for(n=1;t<=c;n++)
{m=m*10;
t=m+b;
if(t==c)
{printf("%ld",n);
return 0;}}
t=0;m=b;
for(n=1;t<=c;n++)
{m=m*10;
t=m+a;
if(t==c)
{printf("-%ld",n);
return 0;}}}