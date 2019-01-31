#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,n,b;
    a=100*pow(0.5,10);
    n=2;
    b=100;
    while(n<=10)
       {

        b=b+100*pow(0.5,n-1)*2;
        ++n;
       }
        printf("%.3f %.3f",b,a);
    return 0;
}
