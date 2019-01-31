#include<stdio.h>
#include<math.h>
int main()
{
    double data[11][5];
    int i,j;
    for(i=0;i<11;i++)
    {
     for(j=0;j<5;j++)
     {
         if(j==0)
            data [i][j]=2+0.1*i;
       else if(j==1)
            data [i][j]=1/data[i][0];
             else if(j==2)
            data [i][j]=data[i][0]*data[i][0];
             else if(j==3)
            data [i][j]=pow(data[i][0],3);
            else
            data [i][j]=pow(data[i][0],4);
            if(j<4)
       printf("%.4lf ",data[i][j]);
      else
       printf("%.4lf\n",data[i][j]);
     }
    }
    return 0;
}