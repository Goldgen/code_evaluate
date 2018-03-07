#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int sum = 0;
    double average = 0;
    int i = 1;
    for(;i <= 5; i++)
    {
        scanf("%d",&a);
        sum = sum + a;
    }
    average = (double) sum / 5.0;
    printf("The average is %.2f\n",average);
    return 0;
}