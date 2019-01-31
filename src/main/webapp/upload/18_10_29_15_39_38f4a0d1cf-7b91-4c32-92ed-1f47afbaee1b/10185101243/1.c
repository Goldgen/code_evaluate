#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for(a=1;a<7;++a)
        for(b=1;b<(100-7*a)/5;++b)
    {
        c=100-a-b;
        if(c%3==0&&7*a+5*b+c/3==100)
            printf("%d %d %d",a,b,c);
    }


    return 0;
}
