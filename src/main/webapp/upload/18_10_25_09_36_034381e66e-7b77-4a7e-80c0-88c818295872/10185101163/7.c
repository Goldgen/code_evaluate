#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,m;
    scanf("%d",&n);
    for(i=0;i<=n/2-1;++i) printf(" ");
    printf("*\n");
    for(i=0;i<=n/2-2;++ i){
        for(m=0;m<n/2-i-1;++m) printf(" ");
        printf("*");
        for(m=0;m<i*2+1;++m) printf(" ");
        printf("*\n");
    }
    for(i=0;i<=n-1;++i) printf("*");
    return 0;
}
