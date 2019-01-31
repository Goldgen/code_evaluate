#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    printf("*");
    for(a=2;a<n;a++)
    {
        printf("\n*");
        for(b=1;b<=a-2;b++)
                printf(" ");
        printf("*");
    }
    printf("\n");
    for(c=1;c<=n;c++)
        printf("*");
    return 0;
}
