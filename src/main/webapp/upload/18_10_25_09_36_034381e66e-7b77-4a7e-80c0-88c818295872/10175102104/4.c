#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    for(a=0;a<n;a++)
    {
        printf("*");
    }
    printf("\n");
    for(a=1;a<n-1;a++)
    {
        printf("*");
        for(b=1;b<n-1;b++)
        {
           printf(" ");
        }
        printf("*\n");
    }
    for(a=0;a<n;a++)
    {
       printf("*");
    }
    return 0;
}