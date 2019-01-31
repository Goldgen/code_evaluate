#include<stdio.h>
void multi(int n)
{
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
            printf(" %d * %d = %2d",j,i,i*j);
        if(i<n)
            printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    multi(n);
    return 0;
}
