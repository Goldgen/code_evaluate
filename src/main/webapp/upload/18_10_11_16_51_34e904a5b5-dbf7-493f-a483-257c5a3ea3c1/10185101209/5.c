#include<stdio.h>

int main()
{
    int a=1;
    int b=1;
    while(a!=11)
    {
        b=a*b;
        a++;
    }
    printf("%d\n",b);
    while(a!=21)
    {
        b=a*b;
        a++;
    }
    printf("%d",b);
    return 0;
}
