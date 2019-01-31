#include <stdio.h>

int main(void)
{
    unsigned int x,p,n;
    scanf("%u %d %d",&x,&p,&n);
    printf("%u",x = x>>(p-n+1)&~(1<<n));
    return 0;
}
