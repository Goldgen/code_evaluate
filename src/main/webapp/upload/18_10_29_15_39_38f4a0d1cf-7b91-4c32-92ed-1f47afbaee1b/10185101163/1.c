#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    for(a=1;a<=100;a++) for(b=1;b<=100;b++) for(c=1;c<=300;c++)
    {
        if((7*a+5*b+c/3==100)&&(c%3==0)&&(a+b+c==100)) printf("%d %d %d",a,b,c);
    }
    return 0;
}