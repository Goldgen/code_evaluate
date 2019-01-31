#include <stdio.h>

int main()
{
    unsigned int x,p,n=0U;
    scanf("%d %d %d",&x,&p,&n);
    x=x<<(sizeof(x)*8-p-1);
    x=x>>(sizeof(x)*8-n);
    printf("%u",x);
    return 0;
}