#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        printf("*");
    for(int i=1;i<=n-2;++i)
    {
        printf("\n*");
        for(int i=1;i<=n-2;++i)
            printf(" ");
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;++i)
        printf("*");
    return 0;
}