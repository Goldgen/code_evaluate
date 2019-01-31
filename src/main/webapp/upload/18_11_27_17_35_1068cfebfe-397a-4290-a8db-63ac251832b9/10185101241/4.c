#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    double data[11][5];
    data[0][0]=2.0;
    for(i=1;i<=10;i++)
    {
        data[i][0]=data[i-1][0]+0.1;
    }
    for(j=0;j<=10;j++)
    {
        data[j][1]=1.0/data[j][0];
        data[j][2]=data[j][0]*data[j][0];
        data[j][3]=data[j][0]*data[j][0]*data[j][0];
        data[j][4]=data[j][0]*data[j][0]*data[j][0]*data[j][0];
    }
    for(i=0;i<=10;i++)
    {
        for(j=0;j<=4;j++)
        {
            if(j==4) printf("%.4f\n",data[i][j]);
            else printf("%.4f ",data[i][j]);
        }
    }
	return 0;
}
