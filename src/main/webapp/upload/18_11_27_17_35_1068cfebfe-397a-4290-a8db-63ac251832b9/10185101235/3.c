#include<stdio.h>
#include<math.h>

int main (void)
{
    long dollar[5] = {0};
    long cent[5] = {0};
    int i = 0;
    double money = 0;
    for(i = 0;i < 5;i++)
    {
        scanf("%lf",&money);
        dollar[i] = money;
        cent[i] = floor(1000 * money - 1000 * dollar[i]);


            cent[i]/=10;


        if(cent[i]>=10)
            printf("$%ld.%ld",dollar[i],cent[i]);
        else
            printf("$%ld.0%ld",dollar[i],cent[i]);
        if(i!=4)
            printf(" ");
    }
}
