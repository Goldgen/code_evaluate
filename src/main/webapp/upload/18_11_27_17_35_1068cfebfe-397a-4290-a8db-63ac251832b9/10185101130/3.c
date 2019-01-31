#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[5];
    int i;
    for(i = 0;i <= 4;i++)
        scanf("%f",&amounts[i]);
    long dollars[5];
    long cents[5];
    for(i = 0;i <= 4;i++)
    {
        dollars[i] = (int)amounts[i];
        cents[i] = (int)((amounts[i] - dollars[i])*100);
    }
    for(i = 0;i <= 4;i++)
    {
        if(i == 4)
            printf("$%ld.%ld",dollars[i],cents[i]);
        else
            printf("$%ld.%ld ",dollars[i],cents[i]);
    }

    return 0;
}
