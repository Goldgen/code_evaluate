#include <stdio.h>
#include <stdlib.h>

void abc(int n)
{
    if(n>0)
    {
        abc(n/2);
        printf("%d",n%2);
    }
    else return;
}
int main()
{
    int n;
    scanf("%d",&n);
    abc(n);
    return 0;
}
