#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
   double data[11][5];
   int i,j,k,m,n;
   for(i=0;i<=10;i++)
   {
       data[i][0]=2.0+i*0.1;
   }
for(j=0;j<=10;j++)
{
    data[j][1]=1.0/data[j][0];
    for(k=2;k<=4;k++)
    {
        data[j][k]=pow(data[j][0],k);
    }
}
for(n=0;n<=10;n++)
    {
        printf("%.4f",data[n][0]);
        for(m=1;m<=3;m++)
        {
        printf(" %.4f",data[n][m]);
        }
        printf(" %.4f\n",data[n][4]);
    }





return 0;
}
