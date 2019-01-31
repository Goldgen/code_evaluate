#include <stdio.h>

#define MoneyA 7*a
#define MoneyB 5*b
#define MoneyC c/3

int main (void)
{
    int a = 1;
    int b = 1;
    float c = 3;

    for(a=1;a<=14;a++)
    {
        for(b=1;b<=(100-MoneyA)/5;b++)
        {
            c = 100 - a - b;
            if(a+b+c == 100 && MoneyA+MoneyB+MoneyC == 100)
            {
                printf("%d %d %.0f",a,b,c);
                break;
            }
        }
    if(a+b+c == 100 && MoneyA+MoneyB+MoneyC == 100)
        break;
    }
}
