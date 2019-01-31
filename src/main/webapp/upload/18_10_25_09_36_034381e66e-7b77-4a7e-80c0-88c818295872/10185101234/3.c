#include<stdio.h>
int main()
{
    double sum=1;
    int count;
    scanf("%d",&count);
    for (int i=1; i<=count; ++i)
    {
        sum *= i;
    }
    printf("%.0lf",sum);
    return 0;
}
