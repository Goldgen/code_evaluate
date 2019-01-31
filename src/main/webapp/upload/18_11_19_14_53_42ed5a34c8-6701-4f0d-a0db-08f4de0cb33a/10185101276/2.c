#include <stdio.h>
int sum(int);
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n)
{
    static int sums=0;
    if(n>0)
    {
        sum(n/10);
        sums+=n%10;
    }
    return sums;
}
