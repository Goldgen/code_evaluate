#include<math.h>
#include<stdio.h>
int main()
{
    double data[11][5];
    int i=0;
    int j=0;
    while(i<11)
    {
        data[i][0]=2.0+0.1*i;
        data[i][1]=1.0/data[i][0];
        data[i][2]=pow(data[i][0],2);
        data[i][3]=data[i][0]*data[i][2];
        data[i][4]=pow(data[i][2],2);
        i++;
    }
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<4;j++)
            printf("%6.4lf ",data[i][j]);
		printf("%6.4lf",data[i][4]);
        printf("\n");
    }
    return 0;
}
