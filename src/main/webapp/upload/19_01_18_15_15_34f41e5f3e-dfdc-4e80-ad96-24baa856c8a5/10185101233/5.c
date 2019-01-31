#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int i=1;
    int j=2;
    while(i<=99)
    {
        a+=i;
        i+=2;
    }
    while(j<=100)
    {
        b+=j;
        j+=2;
    }
    printf("%d %d",a,b);
    return 0;
}