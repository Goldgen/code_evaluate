#include <stdio.h>
#include <stdlib.h>
int main()
{
    double data[100]={0.0};
    double sum=0.0;
    double result=0.0;
    
    for (int i = 1; i <= 100; i++)
    {
        data[i-1]=1.0/((2*i)*(2*i+1)*(2*i+2));
    }
    for (int i = 0; i < 100; i++)
    {
        sum+=(i%2?-1:1)*data[i];
    }
    result = sum * 4.0 + 3.0;
    printf("%.4lf", result);
    return 0;
}