#include <stdio.h>
int gdb(int,int);
int main()
{int a,b,c;
scanf("%d %d",&a,&b);
if(a>b)
    c=gdb(a,b);
else
c=gdb(b,a);
printf("%d",c);
}
int gdb(int n,int m)
{
if(n%m==0)
   return m;
   return gdb(m,n%m);
}
