#include<stdio.h>
int main()
{
    float amounts[5]={0};
    long int dollars[5]={0};
    long int cents[5]={0};
    int i;
    for(i=0;i<5;++i)
    {
        scanf("%f",&amounts[i]);
    }
    for(i=0;i<5;++i)
    {
        dollars[i]=amounts[i];
    }
    for(i=0;i<5;++i)
    {
        cents[i]=(amounts[i]-dollars[i]+0.00001)*100;
    }
    for(i=0;i<4;++i)
    {
        printf("$%ld.%ld ",dollars[i],cents[i]);
    }
    printf("$%ld.%ld",dollars[4],cents[4]);
}
