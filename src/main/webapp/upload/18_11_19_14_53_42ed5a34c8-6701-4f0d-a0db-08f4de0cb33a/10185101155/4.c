#include <stdio.h>
void binary(int t)
{
    if(t>0)
    {
        binary(t/2);
        printf("%d",t%2);
    }
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    binary(n);
    return 0;
}
