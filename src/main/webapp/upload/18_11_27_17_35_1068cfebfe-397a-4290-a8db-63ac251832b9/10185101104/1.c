#include <stdio.h>

int main()
{
    double a[5],b[5],sum=0;
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%lf",&a[i]);
        b[i]=1/a[i];
        sum+=b[i];
    }
    printf("%.2lf",b[0]);
    for(i=1;i<5;i++)
        printf(" %.2lf",b[i]);
    printf("\n%lf",sum);
    return 0;
}
