#include <stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("*");
    for(int i=2;i<=n-1;i++)
    {
        printf("\n*");
        for(int k=0;k<i-2;k++)
       printf(" ");
       printf("*");
}
    printf("\n");
    for(int i=0;i<n;i++)
        printf("*");





   return 0;
}








