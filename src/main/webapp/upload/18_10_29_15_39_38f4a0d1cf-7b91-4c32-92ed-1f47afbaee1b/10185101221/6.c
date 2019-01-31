#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0,b = 0,x = 0,y = 0;
    int GCD = 0;
    scanf("%d %d",&a,&b);
    if (a > b)
    {
        int t = b;
        b = a;
        a = t;
    }
    GCD = a;
    y = b;
    while (y%GCD != 0)
    {
        x = y%GCD;
        y = GCD;
        GCD = x;
    }
    printf("最大公约数是: %d",GCD);
    return 0;
}
