#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(a=0;a<n-1;a++)
    {
        for(b=0;b<=a;b++)
            printf(" %d * %d = %2d",b+1,a+1,(b+1)*(a+1));
        printf("\n");
    }
    for(c=0;c<n;c++)
        printf(" %d * %d = %2d",c+1,n,(c+1)*n);
    return 0;
}

