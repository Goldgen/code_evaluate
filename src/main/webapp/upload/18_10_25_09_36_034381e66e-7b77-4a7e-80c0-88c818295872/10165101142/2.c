#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    double a,sum=0;
    for(i=0;i<5;i++){
        scanf("%lf",&a);
        sum=sum+a;
    }
    sum=sum/5;
    printf("%.1lf",sum);
    return 0;
}


