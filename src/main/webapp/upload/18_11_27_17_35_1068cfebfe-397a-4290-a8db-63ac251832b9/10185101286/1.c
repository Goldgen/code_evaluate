#include<stdio.h>
#include<stdlib.h>
int main()
{
    double shu1[5]={0};
    int i=0;
    double k=0;
    for(i=0;i<5;++i)
    {
        scanf("%lf",&shu1[i]);
    }
    double shu2[5]={0};
    for(i=0;i<5;++i)
    {
        shu2[i]=1.0/shu1[i];
        k+=shu2[i];
    }
    for(i=0;i<4;++i)
    {
        printf("%.2lf ",shu2[i]);
    }
    printf("%.2lf\n%.6lf",shu2[4],k);
    return 0;
}
