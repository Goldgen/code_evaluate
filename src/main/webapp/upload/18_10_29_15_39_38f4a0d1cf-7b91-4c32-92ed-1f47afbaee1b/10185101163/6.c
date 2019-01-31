#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    printf("最大公约数是: %d",a);
    return 0;
}