#include<stdio.h>
#include<math.h>
main()
{
   double data[11][5];
   int n,m,t=10;
   data[0][0]=2.0;
   for(n=1;n<=10;n++)
   {
       data[n][0]=data[n-1][0]+0.1;
   }
   for(m=0;m<=10;m++)
   {
       data[m][1]=1.0/data[m][0];
       for(n=2;n<=4;n++)
            data[m][n]=pow(data[m][0],n);
   }
   for(m=0;m<=10;m++)
   {
       printf("%6.4lf",data[m][0]);
       for(n=1;n<=4;n++)
            printf(" %6.4lf",data[m][n]);
       if(t>0)
       {
           printf("\n");
           t--;
       }
   }
}