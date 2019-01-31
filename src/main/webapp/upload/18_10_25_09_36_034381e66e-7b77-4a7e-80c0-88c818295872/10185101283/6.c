#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    printf("*\n");
    printf("**\n");
    int a=1;
    int x = n-3;
    for(int i=1;i<=n-3;++i)
    {
        printf("*");
    for(int i=1;a<=x,i<=a;++i)
    {
        printf(" ");
    }
    ++a;
    printf("*\n");
    }
    for(int i=1;i<=n;++i)
        printf("*");
    return 0;
}