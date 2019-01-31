#include<stdio.h>
#include<math.h>
int main()
{
    double data[11][5]={0};
    int i,j,k;
    data[0][0]=2.0;
    data[0][1]=1/2.0;
    for(j=2;j<5;++j)
    {
        data[0][j]=pow(2.0,j);
    }
    for(i=1;i<11;++i)
    {
        data[i][0]=2.0+0.1*i;
        data[i][1]=1/data[i][0];
        for(j=2;j<5;++j)
        {
            data[i][j]=pow(data[i][0],j);
        }
    }
    for(i=0;i<10;++i)
    {
        for(j=0;j<4;++j)
        {
            printf("%.4f ",data[i][j]);
        }
		printf("%.4f\n",data[i][4]);
    }
    for(j=0;j<4;++j)
        {
            printf("%.4f ",data[10][j]);
        }
	printf("%.4f\n",data[10][4]);
        return 0;
}
