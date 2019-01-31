#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[11]={2.0,2.1,2.2,2.3,2.4,2.5,2.6,2.7,2.8,2.9,3.0};
    double date[11][5];
    for(int i=0;i<11;++i)
    {
        date[i][0]=a[i];
        date[i][1]=1/a[i];
        date[i][2]=a[i]*a[i];
        date[i][3]=a[i]*a[i]*a[i];
        date[i][4]=a[i]*a[i]*a[i]*a[i];
    }
    for(int i=0;i<11;++i)
    {
        for(int j=0;j<5;++j)
        {
            if((j==4)&&(i!=10))
                printf("%.4lf\n",date[i][j]);
            else if((j==4)&&(i==10))
                printf("%.4lf",date[i][j]);
            else
                printf("%.4lf ",date[i][j]);
        }
    }
    return 0;
}