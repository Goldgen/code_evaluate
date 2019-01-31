#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,l;
    scanf("%d",&n);
    for(i=0;i<n-1;++i)
    {
        for(j=0;j<2*(n-1-i);++j)
            printf(" ");
        for(l=0;l<=i;++l)
        {
            printf("%d+",l+1);
        }
        printf("\b=%d",l);
        for(;l>=2;--l)
        {
            printf("+%d",l-1);
        }
        printf("\n");


    }

        for(l=0;l<=n-1;++l)
        {
            printf("%d+",l+1);
        }
        printf("\b=%d",n);
        for(;l>1;--l)
        {
            printf("+%d",l-1);
        }


    return 0;
}
