#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);

    for (j=1;j<=n/2;j++)
            printf(" ");
    printf("*\n");


   for(i=2;i<=n/2;i++){
    for (j=1;j<=n/2-i+1;j++)
        printf(" ");
    printf("*");
    for(j=1;j<=2*i-3;j++)
        printf(" ");
    printf("*\n");
    }
for(j=1;j<=n;j++)
    printf("*");

    return 0;
}
