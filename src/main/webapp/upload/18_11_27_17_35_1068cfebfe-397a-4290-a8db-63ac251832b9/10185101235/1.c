#include<stdio.h>

int main (void)
{
    double num[5];
    double reciprocal[5];
    int i = 0;
    double total = 0;
    for(i=0;i<5;i++)
        {
            scanf("%lf",&num[i]);
            reciprocal[i] = 1.0/num[i];
            total += reciprocal[i];
        }

    for(i=0;i<5;i++)
        {
            printf("%.2lf",reciprocal[i]);
            if(i!=4)
                printf(" ");
        }
        printf("\n%.6lf",total);

}
