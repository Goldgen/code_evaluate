#include <stdio.h>

int main()
{
   double data[11][5];
   int i,j=0;
   for(i=0;i<11;i++)
    data[i][0]=2.0+0.1*i;
   for(i=0;i<11;i++)
   {
    for(j=1;j<5;j++)
   {
     if(j==1)
        data[i][j]=1.0/data[i][0];
     if(j==2)
        data[i][j]=data[i][0]*data[i][0];
     if(j==3)
         data[i][j]=data[i][0]*data[i][0]*data[i][0];
     if(j==4)
         data[i][j]=data[i][0]*data[i][0]*data[i][0]*data[i][0];
   }
   }
   for(i=0;i<11;i++)
    {for(j=0;j<5;j++)
    {printf("%.4lf",data[i][j]);
      if(j!=4)
        printf(" ");}
   if(i!=10)
    printf("\n");}
  return 0;
}
