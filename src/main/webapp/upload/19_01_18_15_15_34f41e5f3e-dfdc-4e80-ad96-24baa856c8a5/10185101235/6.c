#include <stdio.h>

int main (void)

{
    int a = 0;
    int b = 0;

    scanf("%d %d",&a,&b);

    while(a != b)
    {
        if(a>b)
            a -= b;
        else
            b -= a;
    }
    printf("最大公约数是: %d",a);
}
