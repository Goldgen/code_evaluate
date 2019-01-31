#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0,m,n;
    for(m=1;m<100;m+=2)
        a+=m;
    for(n=2;n<=100;n+=2)
        b+=n;
    printf("%d %d",a,b);
    return 0;
}
