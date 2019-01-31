#include <stdio.h>
int main(void)
{
    int a,b;
    int t=1,m;
    scanf("%d %d",&a,&b);
    t=a-b;
    while(t!=0)
    {
        if(b>a)
        {
            m=a;
            a=b;
            b=m;
        }
        t=a-b;
        a=b;
        b=t;
    }
    printf("最大公约数是: %d",a);
}