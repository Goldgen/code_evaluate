#include <stdio.h>
int main()
{
    unsigned int n;
    scanf("%u",&n);
    int b;
    b = 0;
    while (n!=0)
    {
        if(n%2==1)
        b++;
        n=n/2;
    }
    printf("%d",b);
    return 0;
}