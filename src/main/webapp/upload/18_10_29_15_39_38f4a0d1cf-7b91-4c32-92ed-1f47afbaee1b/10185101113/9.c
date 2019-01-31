#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    printf("1\n");
    for(i=2;i<=n-1;m=1,i++)
    {
        printf("1");
        for(j=1;j<=i-2;j++)
        {
            m=(i-j)*m/j;
            printf(" %d",m);
        }
        printf(" 1\n");
    }
    i=n;
    printf("1");
    for(j=1;j<=i-2;j++)
        {
            m=(i-j)*m/j;
            printf(" %d",m);
        }
    printf(" 1");
    return 0;

}
