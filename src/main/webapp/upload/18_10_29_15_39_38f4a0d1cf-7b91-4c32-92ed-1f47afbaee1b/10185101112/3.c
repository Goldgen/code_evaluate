#include <stdio.h>

int main()
{
    int x,a,b;
    scanf("%d",&x);
    printf("%d",x);
    int a_prime=0;
    int b_prime=0;


    for (a=2;a<x/2+1;a++){
    a_prime=0;
    b_prime=0;
    for (int i=2;i<a;i++)
    {
        if (a%i==0)  a_prime++;
    }

    b=x-a;

    for (int j=2;j<b;j++)
    {
    if (b%j==0) b_prime++;
    }

    if ((b_prime==0)&&(a_prime==0))
    printf("=%d+%d",a,b);
    }

    }