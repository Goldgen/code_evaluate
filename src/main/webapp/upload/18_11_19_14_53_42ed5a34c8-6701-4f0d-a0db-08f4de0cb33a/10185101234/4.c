#include <stdio.h>
#include <stdlib.h>

void bi(unsigned long n);
int main()
{
    unsigned long in;
    while(scanf("%lu",&in)==1)
    {
        bi(in);
        putchar('\n');
    }
}

void bi(unsigned long n)
{
    int a;
    a=n%2;
    if(n>=2)
        bi(n/2);
    putchar(a==0?'0':'1');
}