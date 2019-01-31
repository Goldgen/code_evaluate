#include<stdio.h>
int x(int i)
{
    for(int a=2;a<=i;++a)
        printf(" %d * %d = %2d",a,i,a*i);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf(" 1 * 1 =  1");
    for(int i=2;i<=n;++i)
    {
        printf("\n 1 * %d = %2d",i,i);
        x(i);
    }
    return 0;
}