#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=100,b=100;
    for (int count=1;count<=10;++count)
    {
      a=a/2;
      b=b+2*a;
    }
    b=b-2*a;
    printf("%.3lf %.3lf",b,a);
    return 0;
}
