#include <stdio.h>
int main(void)
{
    int i=1,n=10;
    float a,b,m=100.000f;
    a=m;
    while(i<n)
    {

        m/=2;
        a+=2*m;
        i=i+1;

    }
    b=m/2;
    printf("%.3f %.3f",a,b);
    return 0;
}
