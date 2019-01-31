#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=2,b=1,c=0,d=0,sum=0;
    for(int i=0;i<50;++i)
       {c=a/b;
        d=a;
        a=a+b;
        b=d;
        sum+=c;}
    printf("%.2f",sum);
    return 0;
}
