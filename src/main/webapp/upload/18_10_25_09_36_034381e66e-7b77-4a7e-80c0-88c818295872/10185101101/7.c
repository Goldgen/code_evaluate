#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);

    for(i=1;i<=(n-1)/2;++i)
    {for(j=1;j<=(n+1)/2-i;++j)
        printf(" ");
    printf("*");
    if(i!=1)
        {
            for(j=(n+3)/2-i;j<(n-3)/2+i;++j)
                printf(" ");
            printf("*");}

     printf("\n");
    }
    for(j=1;j<=n;++j)
        printf("*");

    return 0;
}
