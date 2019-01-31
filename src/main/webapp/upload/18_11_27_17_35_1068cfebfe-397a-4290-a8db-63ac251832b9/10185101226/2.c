#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double data[100],sum=0,s1;;
    int i,j;
    for(i=0;i<=99;++i)
    {
        j=i+1;
        data[i]=(double)1.0/(2*j*(2*j+1)*(2*j+2));
    }
    for(i=0;i<=99;++i)
    {
        sum+=(double)data[i]*pow(-1,i);
    }
    s1=sum*4.0+3.0;
    printf("%.4lf",s1);
    return 0;
}