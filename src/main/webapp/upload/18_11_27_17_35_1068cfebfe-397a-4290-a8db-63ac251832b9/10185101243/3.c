
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    float amounts[5];

    int i;
    for(i=0;i<=4;i++)
    {
        scanf("%f",&amounts[i]);
    }



        printf("$%.2f $%.2f $%.2f $%.2f $%.2f",amounts[0],amounts[1],amounts[2],amounts[3],amounts[4]);




return 0;
}
