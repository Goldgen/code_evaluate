#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,b;
    scanf("%d",&n);
    printf("*\n");
    printf("**\n");
    for (i=3;i<=n-1;++i)
    {


        printf("*");
        for (j=2;j<=i-1;++j)
            printf(" ");
        printf("*\n");
    }
    for(b=1;b<=n;b++) printf("*");
    return 0;
}
