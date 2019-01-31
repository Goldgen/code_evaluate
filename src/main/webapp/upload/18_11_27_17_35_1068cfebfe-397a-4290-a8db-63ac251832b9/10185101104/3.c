#include <stdio.h>

int main()
{
    float amount[5];
    long dollars[5],cents[5];
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%f",&amount[i]);
        dollars[i]=amount[i];
        cents[i]=amount[i]*100-dollars[i]*100;
    }
    printf("$%d.%02d",dollars[0],cents[0]);
    for(i=1;i<5;i++)
        printf(" $%d.%02d",dollars[i],cents[i]);
    return 0;
}
