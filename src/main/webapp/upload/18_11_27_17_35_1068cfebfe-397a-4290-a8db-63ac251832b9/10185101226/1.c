#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double a,num[5],res[5],sum=0;
    for(i=0;i<=4;++i)
    {
    scanf("%lf",&a);
    num[i]=a;
    res[i]=1.0/a;
    printf("%.2lf ",res[i]);
    }
    printf("\n");
    for(i=0;i<=4;++i)
    {
        sum+=res[i];
    }
    printf("%.6lf",sum);
    return 0;
}
