#include <stdio.h>
int binary(int n)
{
        if(n/2>0)
        binary(n/2);
    printf("%d",n%2);
}

void main()
{
    int x;
    scanf("%d",&x);
    binary(x);
}
