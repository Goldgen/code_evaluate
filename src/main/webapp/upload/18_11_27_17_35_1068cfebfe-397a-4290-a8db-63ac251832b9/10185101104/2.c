#include <stdio.h>

int main()
{
    double data[101],sum=0;
    int i,j=1;
    for(i=1;i<101;i++)
    {
        data[i]=1.0/((2*i)*(2*i+1)*(2*i+2));
        sum+=j*data[i];
        j*=-1;
    }
    printf("%.4lf",sum*4.0+3.0);
    return 0;
}
