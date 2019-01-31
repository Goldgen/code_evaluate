#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,i1,i2,i3,h,f,s,t;
   scanf("%d",&n);
   printf("1\n");
   h=2;
   while (h<=n)
   { i=1;
     while (i<=h)
     { if (i==1) printf("1");
     else if (i==h&&h==n) printf(" 1");
     else if (i==h) printf(" 1\n");
     else  {f=1;s=1;t=1;
            for(i1=1;i1<=h-1;++i1) {f=f*i1;}
            for(i2=1;i2<=i-1;++i2) {s=s*i2;}
            for(i3=1;i3<=h-i;++i3) {t=t*i3;}
            printf(" %d",f/(s*t));}
     ++i;}
     ++h;}
   return 0;
}
