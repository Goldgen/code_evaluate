#include <stdio.h>


int main()
{
    unsigned int x,p,n,result;
    scanf("%u %u %u",&x,&p,&n);
    p=31-p;
    n=32-n;
        result = x << p;
        result >>= n;
        printf("%u",result);
}
