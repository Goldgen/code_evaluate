#include <stdio.h>
#include <math.h>
int main()
{
    double data[11][5];
    double num=2.0;
    for (int i=0;i<11;i++,num+=0.1)
    {
        data[i][0]=num;
        for(int j=1;j<5;j++)
        {
            switch (j)
            {

            case 1:
            data[i][j]=1/data[i][0];
            break;
            case 2:
            data[i][j]=data[i][0]*data[i][0];
            break;
            case 3:
            data[i][j]=data[i][0]*data[i][0]*data[i][0];
            break;
            case 4:
            data[i][j]=data[i][0]*data[i][0]*data[i][0]*data[i][0];
            break;
            default:
            break;
            }
        }
    }
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%.4lf",data[i][j]);
            if(j!=4)
                printf(" ");
        }
        if(i!=10)
            printf("\n");
    }
    return 0;
}
