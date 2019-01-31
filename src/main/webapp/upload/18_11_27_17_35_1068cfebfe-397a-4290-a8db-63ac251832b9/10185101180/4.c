#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
   double data[11][5]={{2.0},{2.1},{2.2},{2.3},{2.4},{2.5},{2.6},{2.7},{2.8},{2.9},{3.0}};
   for(i=0;i<11;i++)
   {
       data[i][1]=1.0/data[i][0];
       data[i][2]=data[i][0]*data[i][0];
       data[i][3]=data[i][0]*data[i][0]*data[i][0];
       data[i][4]=data[i][0]*data[i][0]*data[i][0]*data[i][0];
       if(data[i][0]!=3.0)
       printf("%.4lf %.4lf %.4lf %.4lf %.4lf\n",data[i][0],data[i][1],data[i][2],data[i][3],data[i][4]);
       else
        printf("%.4lf %.4lf %.4lf %.4lf %.4lf",data[i][0],data[i][1],data[i][2],data[i][3],data[i][4]);
   }
   return 0;
}
