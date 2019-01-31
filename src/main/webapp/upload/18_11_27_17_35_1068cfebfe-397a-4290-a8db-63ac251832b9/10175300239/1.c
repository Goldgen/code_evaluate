#include <stdio.h>

int main()
{
    double a[5],b[5];
    double sum=0.0;
    int i=0;
    for(i=0;i<5;i++)
        scanf("%lf",&a[i]);
    for(i=0;i<5;i++){
        b[i]=1.0/a[i];
        sum+=b[i];
    }
    for(i=0;i<4;i++)
        printf("%.2lf ",b[i]);
    printf("%.2lf\n",b[i]);
    printf("%.6lf",sum);
    return 0;
}
