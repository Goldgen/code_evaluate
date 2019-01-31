#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a=2,b=1,c,sum=0;
    for(int i=0;i<50;++i)
    {
        sum+=a/b;
        c=a;
        a=a+b;
        b=c;
    }
    printf("%.2lf",sum);
    return 0;
}
