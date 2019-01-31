#include <stdio.h>
main()
{
	int n,i=1,j=1;
	scanf("%d",&n);
    for(;i<=n;i++)
        printf("*");
        i=1;
    for(;i<=n-2;i++)
    {
        printf("\n*");
        for(j=1;j<=n-2;j++)
            printf(" ");
        printf("*");
    }
    i=1;
    printf("\n");
    for(;i<=n;i++)
        printf("*");
}