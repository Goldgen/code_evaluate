#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(a=0;a<(n-1)/2;a++)
    { 
        printf(" ");
    }
    printf("*");
    printf("\n");
    for(a=3;a<=n-2;a=a+2)
    {  
        for(b=0;b<(n-a)/2;b++)
        {
            printf(" ");
        }
        printf("*");
        for(b=0;b<a-2;b++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(a=0;a<n;a++)
    {
        printf("*");
    }
    return 0;
}