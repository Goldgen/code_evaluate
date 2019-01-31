#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=(n-i)*2;++j)
            printf(" ");
        printf("1");
        for(int k=2;k<=i;++k)
            printf("+%d",k);
        printf("=");
        for(int l=i;l>=2;--l)
            printf("%d+",l);
        printf("1");
        if(i<n)
            printf("\n");
    }
    return 0;
}
