#include<stdio.h>
int main()
{
    int a,b,i,j;
    a=0;
    b=0;
    for(i=1;i<=99;i+=2)
    {
        a+=i;
    }
    for(j=2;j<=100;j+=2)
    {
        b+=j;
    }
    printf("%d %d",a,b);
    return 0;
}
