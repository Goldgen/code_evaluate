#include<stdio.h>
#include<string.h>
#define N 1000
int i;
int main()
{
    float amount[5];
    for(i=0;i<5;i++){
        scanf("%f",&amount[i]);
    }
    printf("$%.2f",amount[0]);
    for(i=1;i<5;i++)
    {
    printf(" $%.2f",amount[i]);
    }
    return 0;
}