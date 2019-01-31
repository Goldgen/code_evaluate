#include <stdio.h>
#include <stdlib.h>

int result;

int Count(int n)
{
    if((n/10)!=n)
    {
        result=n%10+Count(n/10);

    }
    else
    {
        return result;
    }
}

int main()
{
    int n,x;
    scanf("%d",&n);
    x=Count(n);
    printf("%d",x);
    return 0;
}