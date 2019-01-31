#include<stdio.h>
int main()
{
    double data[100];
    double a=2,b=3,c=4;
    for(int i=0;a<=200;++i,a=c,b=b+2,c=c+2)
    {
        data[i]=1/(a*b*c);
    }
    double d=0;
    for(int i=0;i<100;++i)
    {
        if(i%2==0)
            d=d+data[i];
        else
            d=d-data[i];
    }
    printf("%.4lf",d*4.0+3.0);
    return 0;
}
