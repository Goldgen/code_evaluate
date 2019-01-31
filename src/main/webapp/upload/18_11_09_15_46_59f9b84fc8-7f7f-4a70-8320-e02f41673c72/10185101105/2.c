#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1=1.0f,a2=2.0f,a,b1=2.0f,b2=3.0f,b,x=2.0+3.0/2,i;
    for(i=3;i<=50;i++)
    {
        a=a1+a2;
        b=b1+b2;
        x+=b/a;
        a1=a2;
        a2=a;
        b1=b2;
        b2=b;
    }
    printf("%.2f",x);
    return 0;
}
