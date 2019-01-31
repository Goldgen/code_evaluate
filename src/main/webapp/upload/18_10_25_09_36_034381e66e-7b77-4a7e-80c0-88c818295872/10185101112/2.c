#include <stdio.h>

int main()
{
    int i=1;
    float num,sum=0.0,average;
    for (;i<6;++i)
    {
        scanf("%f",&num);
        sum=num+sum;
    }
    average=sum/5;
    printf("%.1f",average);
    return 0;
}