#include<stdio.h>
#include<string.h>
#include<memory.h>
int main()
{
    long long i,a=2,b=1;
    float sum=0;
    for(i=1;i<=50;i++)
    {
        sum+=(float)(a)/b;
        a=a+b;
        b=a-b;
    }
    printf("%.2f",sum);
    return 0;

}
