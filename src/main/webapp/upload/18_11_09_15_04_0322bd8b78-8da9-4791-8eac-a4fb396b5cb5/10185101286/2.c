#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,h,i,j,k,l;
    scanf("%d",&n);
    for(h=1;h<=(n-1)*2;++h)
    {
        printf(" ");
    }
    printf("1=1");
    for(i=2;i<=n;++i)
    {
        printf("\n");
        for(j=1;j<=(n-i)*2;++j)
            {
                printf(" ");
            }
            printf("1");
            for(k=2;k<=i;++k)
            {
                printf("+%d",k);
            }
            printf("=");
            for(l=i;l>1;--l)
            {
                printf("%d+",l);
            }
            printf("1");
    }
    return 0;
}
