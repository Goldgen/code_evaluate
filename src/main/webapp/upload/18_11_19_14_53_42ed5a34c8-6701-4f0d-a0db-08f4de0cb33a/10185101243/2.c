#include <stdio.h>
#include <stdlib.h>
int sum(int a)
{
    if(a/10==0)
        return a;
    
        return a%10+sum(a/10);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
