#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("*");
    for(i=1;i<=(n-2);i++)
    {
        printf("\n*");
        for(int j=1;j<=(n-2);j++)
            printf(" ");
        printf("*");
    }
    printf("\n");
    for(i=1;i<=n;i++)
        printf("*");

    return 0;
}
