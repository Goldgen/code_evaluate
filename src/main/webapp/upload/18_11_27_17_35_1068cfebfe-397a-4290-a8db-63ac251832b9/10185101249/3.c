#include <stdio.h>
int main()
{
    float amounts[5]={0};
    long dollars[5]={0},cents[5]={0};
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%f",&amounts[i]);
        dollars[i]=amounts[i];
        cents[i]=amounts[i]*100-dollars[i]*100;
        if(cents[i]<10)
            printf("$%ld.0%ld",dollars[i],cents[i]);
        else
            printf("$%ld.%ld",dollars[i],cents[i]);
        if(i<4)
            printf(" ");
    }
    return 0;
}
