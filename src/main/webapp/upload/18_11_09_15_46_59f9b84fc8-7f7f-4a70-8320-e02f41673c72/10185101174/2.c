#include <stdio.h>
#include <stdlib.h>
//a/b//
int main()
{
    float a=2.0;
    float b=1.0;
    float c;
    float sum=0.0;
    for(int i=0;i<50;i++)
    {
        sum+=a/b;
        c=a;
        a=a+b;
        b=c;
    }
    printf("%.2f",sum);
    return 0;

}
