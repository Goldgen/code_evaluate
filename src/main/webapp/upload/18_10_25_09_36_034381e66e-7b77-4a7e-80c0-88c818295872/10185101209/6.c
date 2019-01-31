#include<stdio.h>

int main()
{
    int n,i,u;

    scanf("%d",&n);
    printf("*\n**\n");
    for(i=4;i <= n;i++){
        printf("*");
        for(u=4;u <= i;u++)
            printf(" ");
        printf("*\n");
    }
    for(i=1;i <= n;i++)
        printf("*");
    return 0;
}
