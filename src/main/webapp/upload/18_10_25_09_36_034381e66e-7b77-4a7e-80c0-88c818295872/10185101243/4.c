#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,a,b;
    scanf("%d",&n);
    for (i=1;i<=n;++i) printf("*");
    printf("\n");
    for(a=2;a<=n-1;a++)
    {


        printf("*");
        for (j=1;j<=n-2;++j)
            printf(" ");
        printf("*\n");
    }
    for(b=1;b<=n;b++) printf("*");
    return 0;
}