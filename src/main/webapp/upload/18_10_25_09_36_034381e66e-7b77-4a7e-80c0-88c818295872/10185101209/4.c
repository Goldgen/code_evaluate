#include<stdio.h>

int main()
{
    int a,i,u;

    scanf("%d",&a);
    for(i = 1;i <= a;i++)
        printf("*");
    for(i=3;i <= a;i++){
        printf("\n*");
        for(u=3;u<=a;u++)
            printf(" ");
        printf("*");
    }
    printf("\n");
    for(i = 1;i <= a;i++)
        printf("*");
    return 0;
}
