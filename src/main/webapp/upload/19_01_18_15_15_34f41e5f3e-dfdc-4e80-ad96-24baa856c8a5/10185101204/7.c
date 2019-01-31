#include <stdio.h>
int main()
{int a=0,b=0,c=0,d=0,i=0;
scanf("%d",&a);
for(i=1;a!=0,i<32;++i)
  { c=a>>1;
    d=c<<1;
   if(d!=a)
    b++;
    a=c;}
printf("%u",b);
}