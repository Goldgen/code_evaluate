#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=(n+1)*2;
    int j;
    int m;
    for(j=1;j<=n;++j)
    {

        for(m=1;m<=i;++m)
        {
            printf(" ");
        }
        printf("%d=%d\n",j,j);
    }

    return 0;
}
