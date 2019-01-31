#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  double data[11][5];
   int lie,hang;
   for (hang=0;hang<11;++hang)
   {
       data[hang][0]=2+0.1*hang;
       data[hang][1]=1/data[hang][0];
       for(lie=2;lie<5;++lie)
       {
           data[hang][lie] = pow(data[hang][0],lie);
       }
   }
   for(hang=0;hang<11;++hang)
   {
       for(lie=0;lie<5;++lie)
       {
           printf("%.4lf",data[hang][lie]);
           if (lie!=4) printf(" ");
       }
       if (hang!=10) printf("\n");
   }
   return 0;
}

