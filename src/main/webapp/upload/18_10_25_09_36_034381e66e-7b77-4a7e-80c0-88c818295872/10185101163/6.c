#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    scanf("%d",&n);
    printf("*");
    for(i=1;i<=n-2;++i){
        printf("\n*");
        for(m=0;m<=i-2;++m){
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for(i=0;i<=n-1;++i){
        printf("*");
    }
    return 0;
}
