#include <stdio.h>
#include <stdlib.h>

int main()
{
    double amounts[5];
    for(int i=0;i<5;++i)
        scanf("%lf",&amounts[i]);
    //long dollars[5],cent[5];
    //for(int i=0;i<5;++i)
    //{
    //    dollars[i]=(long)amounts[i];
    //    cent[i]=(long)(amounts[i]*100)-dollars[i]*100;
    //}
    //for(int i=0;i<5;++i)
    //{
    //    if(i==4)
    //        printf("$%ld.%ld",dollars[i],cent[i]);
    //    else
    //        printf("$%ld.%ld ",dollars[i],cent[i]);
    //}
    for(int i=0;i<5;++i)
    {
        if(i==4)
            printf("$%.2lf",amounts[i]-0.0045);
        else
            printf("$%.2lf ",amounts[i]-0.0045);
    }
    return 0;
}
