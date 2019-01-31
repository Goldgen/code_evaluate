#include<stdio.h>
int main(void)
{
    int a,b,c;
    float d;
    for(a=0;a<100&&d!=100;)
    {
        a++;
        for(b=0;b<(100-a)&&d!=100;)
        {
            b++;
            c=100-b-a;
            d=(float)c/3+b*5+a*7;
        }
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
