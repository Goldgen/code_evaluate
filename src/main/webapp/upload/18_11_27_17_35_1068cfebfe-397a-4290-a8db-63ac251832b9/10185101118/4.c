#include<stdio.h>
int main()
{
    double a[11][5],i=2.0;
    for (int v=0; v<11; i+=0.1,v++)
    {
        a[v][0]=i;
        a[v][1]=1/i;
        a[v][2]=i*i;
        a[v][3]=i*i*i;
        a[v][4]=i*i*i*i;
    }
    for(int v=0; v<11; v++)
    {
        int j;
        for (j=0; j<4; j++)
            printf("%.4lf ",a[v][j]);
        if (j==4 && v!=10) printf("%.4lf\n",a[v][j]);
        if (j==4 && v==10) printf("%.4lf",a[v][j]);
    }
    return 0;
}
