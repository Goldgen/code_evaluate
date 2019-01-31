#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=1;
    int a;
    float sum;
    while(count<=5)
    {
        scanf("%d",&a);
        sum+=a;
        count++;
    }
    printf("%.1f",sum/5);
    return 0;
}