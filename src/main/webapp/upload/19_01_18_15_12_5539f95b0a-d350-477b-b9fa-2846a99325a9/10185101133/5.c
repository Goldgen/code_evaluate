#include <stdio.h>
#include <stdlib.h>

int main()
{
    int G_1[8]={0};
    int i=0;
    for(;i<=7;i++)
        scanf("%d",&G_1[i]);
    int sum_1=0;
    i=0;
    for(;i<=7;i++)
        sum_1+=G_1[i];
    printf("%d\n",sum_1);

    int G_2[8]={0};
    char comma=',';
    i=0;
    for(;i<=7;i++)
        scanf("%d%c",&G_2[i],&comma);
    int sum_2=0;
    i=0;
    for(;i<=7;i++)
        sum_2+=G_2[i];
    printf("%d",sum_2);
    return 0;
}