#include <stdio.h>
#include <stdlib.h>

void erjingzhi(int a)
{
    int i=0;
    i=a%2;
    if(a>=2)
        erjingzhi(a/2);
    putchar(i==0?'0':'1');
    return;
}

int main()
{
    int a=0;
    scanf("%d",&a);
    erjingzhi(a);
    return 0;
}
