#include<stdio.h>
int main()
{
    double d[11][5]={0};
    double x=2.0;
    for(int i=0;i<11;++i)
    {
        d[i][0]=x;
        d[i][1]=1.0/x;
        d[i][2]=x*x;
        d[i][3]=x*x*x;
        d[i][4]=x*x*x*x;
        x =x+0.1;
    }
    for(int i=0;i<11;++i)
    {
        printf("%.4lf %.4lf %.4lf %.4lf %.4lf\n",d[i][0],d[i][1],d[i][2],d[i][3],d[i][4]);
    }
    return 0;
}