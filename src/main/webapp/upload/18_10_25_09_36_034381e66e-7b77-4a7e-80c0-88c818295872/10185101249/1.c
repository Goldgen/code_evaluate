#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s = 100.0;
    double a = 100.0;
    int b;
    for(b=1;b<=10;b++)
    {
        a/=2;
        s=s+2*a;
    }
    s=s-2*a;
    printf("%.3f %.3f",s,a);
    return 0;
}
