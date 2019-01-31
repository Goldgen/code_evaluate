#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    printf("*\n**\n");
    for(i=1;i<=(n-3);i++)
    {
        printf("*");
        for(int k=1;k<=i;k++)
            printf(" ");
        printf("*\n");
    }
    for(i=1;i<=n;i++)
        printf("*");

    return 0;
}