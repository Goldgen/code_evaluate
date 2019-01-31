#include <stdio.h>
#include <stdlib.h>

int trans(int n);

int main()
{
    int n;
    scanf("%d",&n);
    trans(n);
    return 0;
}

int trans(int n)
{
    if(n==1)
    {
        printf("1");
        return 0;
    }
    else
    {
        trans(n/2);
        printf("%d",n%2);
    }
}
