#include<stdio.h>

main()
{
    int a = 10;
    int b = 20;
    long c = 1;
    double d = 1;
    while(a >= 1)
    {
        c = c * a;
        a = a - 1;
    }
    while(b >= 1)
    {
        d = d * b;
        b = b - 1;
    }
        printf("%d\n%.0f",c,d);
}
