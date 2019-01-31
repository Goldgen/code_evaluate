#include <stdio.h>
#include <stdlib.h>

int sum(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}

int sum(int n)
{
    if(n<10)
        return n;
    else
        return n%10+sum(n/10);
}
