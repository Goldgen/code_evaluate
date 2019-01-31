#include<stdio.h>
int main()
{
    int a=0,b=0;
    for(int i=1,j=2;i<=99,j<=100;i+=2,j+=2)
    {
        a+=i;
        b+=j;
    }
    printf("%d %d",a,b);
    return 0;
}