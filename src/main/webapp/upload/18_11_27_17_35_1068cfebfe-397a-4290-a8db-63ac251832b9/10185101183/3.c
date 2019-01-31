#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[5];
    for(int i=0;i<5;++i)
        scanf("%f",&amounts[i]);
    for(int i=0;i<4;++i)
        printf("$%.2f ",amounts[i]);
    printf("$%.2f",amounts[4]);
}
