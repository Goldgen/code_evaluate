#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    for(i=1;i<=(n-1);i+=2)
    {
        if(i==1)
        {
            for(k=1;k<=((n-i)/2);k++)
                printf(" ");
            printf("*");
            printf("\n");
        }
        else
        {
            for(k=1;k<=((n-i)/2);k++)
                printf(" ");
            printf("*");
            for(k=1;k<=(i-2);k++)
                printf(" ");
            printf("*");
            printf("\n");
        }
    }
    for(i=1;i<=n;i++)
        printf("*");
    return 0;
}