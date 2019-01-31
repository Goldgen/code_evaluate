#include <stdio.h>
int sum(int n)
{
    return (n>0)?n%10+sum(n/10):0;
}
int main()
{
    int t=0;
    while(scanf("%d",&t)!=EOF)
    {
        printf("%d\n",sum(t));
    }
    return 0;
}