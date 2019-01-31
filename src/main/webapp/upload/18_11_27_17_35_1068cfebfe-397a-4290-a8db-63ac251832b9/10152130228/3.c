#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[6];
    //int a[6];
    for(int i=0; i<5; i++){
        scanf("%f", &amounts[i]);
        //a[i]=(int)(amounts[i]*100+0.5);
        //amounts[i]=(float)a[i]/100;
    }
    for(int i=0; i<4; i++)
        printf("$%.2f ", amounts[i]);
    printf("$%.2f", amounts[4]);
    return 0;
}
