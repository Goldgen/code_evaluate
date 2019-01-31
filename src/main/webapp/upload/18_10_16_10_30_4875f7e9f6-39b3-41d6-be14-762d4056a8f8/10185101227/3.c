#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int x,p,n,m;
    scanf("%u%u%u",&x,&p,&n);
    m=((1<<n)-1)<<(p-n+1);
    x=x^m;
    printf("%u",x);
    return 0;
}
