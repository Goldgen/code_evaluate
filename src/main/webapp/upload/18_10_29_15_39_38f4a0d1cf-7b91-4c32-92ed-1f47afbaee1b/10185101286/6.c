#include<stdio.h>
int main()
{
    unsigned int a,b,i;
    scanf("%u %u",&a,&b);
    if(a<b)
    {
        i=a;
        a=b;
        b=i;
    }
    for(;;)
    {
        i=b;
        a=a%b;
        if(a==0)
        {
            printf("最大公约数是: %u",b);
            break;
        }
        else
        {
            b=a;
            a=i;
        }
    }
    return 0;
}
