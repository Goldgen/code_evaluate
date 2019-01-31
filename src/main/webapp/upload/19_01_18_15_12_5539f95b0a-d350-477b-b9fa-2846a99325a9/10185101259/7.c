#include<stdio.h>
int main()
{ int a=0,b=0,c=0,d=0,m=0;
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<=b)
m=b;
else
m=a;
if(m<=c)
m=c;
else
m=m;
if(m<=d)
m=d;
else
m=m;
printf("%d",m);
return 0;

    }
