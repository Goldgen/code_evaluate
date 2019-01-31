#include <stdio.h>
#include <math.h>
int main(void)
{
    double data[100],sum=0;
    int i=1;
    for(;i<101;i++){
        data[i-1]=1.0/(2*i*(2*i+1)*(2*i+2));
    }
    for(i=0;i<100;i++){
        sum+=pow(-1.0,(double)i)*data[i];
    }
    sum=4.0*sum+3.0;
    printf("%.4lf",sum);
    return 0;
}