#include <stdio.h>
#include <stdlib.h>
int main()
{  double s=0;
   double data [100];
   for(int i=0;i<100;++i)
   {
       data [i] = 1/(2*((double)i+1)*(2*(i+1)+1)*(2*(i+1)+2));
   }
   for (int x=0;x<100;++x)
   {if(x%2==0) s=s+data[x];
   else s=s-data[x];
   }
   printf("%.4lf",s*4.0+3.0);
   return 0;
}

