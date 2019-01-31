#include <stdio.h>
#include <stdlib.h>
int mul(int a,int b)
{
    int sum;
    sum=a*b;
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j)
        {
            printf( "%d * %d =%d ",j,i,mul(i,j));
        }
        printf("\n");
    }
    return 0;
}