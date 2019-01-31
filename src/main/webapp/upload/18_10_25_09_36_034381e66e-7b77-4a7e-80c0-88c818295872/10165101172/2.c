
#include <stdio.h>

double average(double *a,int n){
    double sum = 0;
    int i;
    for (i = 0;i < n;i++)
        sum += a[i];
    return sum/n;
}

int main(void)
{
    double Average[5];
    int i;
    for (i = 0;i < 5;i++)
        scanf("%lf",&Average[i]);
    printf("%.1lf",average(Average,5));
    return 0;
}
