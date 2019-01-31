#include <stdio.h>
#include <math.h>
int main()
{
    float x=100.0,sum=0.0;
    for(int i=1;i<=10;i++){
        x=x/2;
        sum+=x*2;
    }
    printf("%.3f %.3f",100+sum-2*x,x);

}