#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double arr[11][5],a=2.0,x;
    int i,j;
    for(i=0;i<=10;++i)
    {
        arr[i][1]=a;
        a+=0.1;
    }
    for(i=0;i<=10;++i)
    {
       x=arr[i][0];
       arr[i][1]=1/x;
       arr[i][2]=pow(x,2);
       arr[i][3]=pow(x,3);
       arr[i][4]=pow(x,4);
    }
    for(i=0;i<=10;++i)
    {
        for(j=0;j<=4;++j)
        {
            printf("%.4lf",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
