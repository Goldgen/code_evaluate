
#include<stdio.h>
int main()
{
    double shu[5];
    double dao[5];
    int i=0;
    double sum=0;
    while(i<4)
    {
        scanf("%lf",&shu[i]);
        dao[i]=1.0/shu[i];
        sum+=dao[i];
        printf("%.2lf ",dao[i]);
        i++;
    }
    scanf("%lf",&shu[i]);
    dao[i]=1.0/shu[i];
    sum+=dao[i];
    printf("%.2lf",dao[i]);
    printf("\n%.6lf",sum);
    return 0;
}
