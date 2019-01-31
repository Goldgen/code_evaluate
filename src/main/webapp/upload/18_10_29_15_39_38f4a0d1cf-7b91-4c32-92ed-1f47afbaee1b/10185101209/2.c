#include<stdio.h>

int main()
{
    int accuracy=1000000,n=1,m=1;
    float e=1.0;

    for(;n<=accuracy;m++){
        n*=m;
        e+=(float)1/n;
    }
    printf("%.6f",e);
    return 0;
}
