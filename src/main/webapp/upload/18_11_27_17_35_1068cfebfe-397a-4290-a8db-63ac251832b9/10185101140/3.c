#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[5] = {0.0f};
    long dollars[5] = {0};
    long cents[5] = {0};
    int i;
    for (i=0; i<5; i++){
        scanf("%f",&amounts[i]);
        dollars[i] = (long)amounts[i];
        printf("$%ld.",dollars[i]);
        cents[i] = (long)((amounts[i] - dollars[i])*100+1e-05);
        if (cents[i]<10) printf("0");
        printf("%ld",cents[i]);
        if (i<4) printf(" ");
    }

    return 0;
}
