#include <stdio.h>
#include <stdlib.h>
int main()
{  double n,s=0;
   double y [5];
   double d [5];
   for (int i=0;i<5;++i)
   {
       scanf("%lf",&n);
       y [i] =n;
   }
   for(int x=0;x<5;++x)
   {
       d [x]=1.0/y [x];
   }
   for (int x=0;x<4;++x)
   {
       printf("%.2f ",d[x]);
   }
   printf("%.2f\n",d[4]);
   for (int x=0;x<5;++x)
   {
       s=s+d[x];
   }
   printf("%.6lf",s);
   return 0;
}

