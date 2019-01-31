#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    s=n;
    int i;
    for(i=1;i<=n;++i)
    {
        for(int j=1;j<=(s-1)*2;++j)
        printf(" ");
        printf("1");
        for(int w=2;w<=i;++w)
            printf("+%d",w);
        printf("=");
        printf("%d",i);
         for(int q=(i-1);q>=1;--q)
            printf("+%d",q);
        s=s-1;
        if(i<n)
        printf("\n");
    }
    return 0;
}
