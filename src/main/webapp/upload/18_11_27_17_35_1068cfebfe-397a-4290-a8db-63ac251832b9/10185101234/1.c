
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double arr[5],arrs[5],sum=0.0;
    int i;
    for(i=0;i<5;i++)
    {
       scanf("%lf",&arr[i]);
        arrs[i]=1.0/arr[i];
        printf("%.2lf",arrs[i]);
        if(i<4) printf(" ");
        sum+=arrs[i];
    }
    printf("\n%.6lf",sum);
}