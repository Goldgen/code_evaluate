#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n=0;
    unsigned int i=0;
    unsigned int j=0;

    printf("\nEnter a integer between 4 and 10:");
    scanf("%u",&n);

    if(n<4||n>10)
    {
        printf("\nPlease enter a number between 4 and 10.\n");
        return 0;
    }

    printf("\n");

    for(i=0; i<n; ++i)
    {
        printf("*");
    }

    for(j=0; j<n-2; ++j)
    {
        printf("\n*");
        for(i=0; i<n-2; ++i)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");

    for(i=0; i<n; ++i)
    {
        printf("*");
    }printf("\n");


    return 0;
}