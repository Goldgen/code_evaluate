#include <stdio.h>

int main(void)
{
    int i=0;
    double a[5],b[5],sum=0;
    for(scanf("%lf",&a[i]);i<4;i++,scanf(" %lf",&a[i])){
        b[i]=1.0/a[i];
        printf("%.2lf ",b[i]);
        sum+=b[i];
    }
    b[i]=1.0/a[i];
    printf("%.2lf\n",b[i]);
    printf("%.6lf",sum+=b[i]);
    return 0;
}