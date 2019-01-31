#include<stdio.h>
int main()
{
    double amounts[5];
    long dollars[5],cents[5];
    for (int i=0; i<5; i++)
    {
        scanf("%lf",&amounts[i]);
        dollars[i]=(long)(amounts[i]+1e-07);
        cents[i]=(long)((amounts[i]+1e-07)*100)%100;
    }
    for (int i=0; i<4; i++)
    {
        if (cents[i]<10)
            printf("$%ld.%ld%ld ",dollars[i],0,cents[i]);
        else printf("$%ld.%ld ",dollars[i],cents[i]);
    }
    if (cents[4]<10)
        printf("$%ld.%ld%ld",dollars[4],0,cents[4]);
    else printf("$%ld.%ld",dollars[4],cents[4]);
    return 0;
}
