#include <stdio.h>
int main()
{
    int a=0,b=0,i=1;
    for(;i<=100;i++)
    {
        if(i%2==0)
            b+=i;
        else
            a+=i;
    }
    printf("%d %d",a,b);
}