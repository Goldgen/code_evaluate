#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double data[100];
    double sum=0;
    for(int i=0;i<100;i++)
    {
        int t=(i+1)*2;
        data[i] = 1.0/t/(t+1)/(t+2);
        sum+=data[i]*pow(-1,i);
    }
    printf("%.4lf",sum*4.0+3.0);
    return 0;
}
