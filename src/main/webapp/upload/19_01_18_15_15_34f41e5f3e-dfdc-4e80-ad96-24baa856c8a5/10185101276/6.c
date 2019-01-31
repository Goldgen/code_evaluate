#include <stdio.h>
int main()
{
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    while(a!=b)
    {
        if(a<b)b=b-a;
        if(a>b)a=a-b;
    }
    printf("最大公约数是: %d",a);
    return 0;
}

