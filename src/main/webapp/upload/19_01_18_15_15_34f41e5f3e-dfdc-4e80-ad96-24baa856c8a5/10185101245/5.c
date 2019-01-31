#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int sum1,sum2;
    for(a=1;a<=99;a=a+2)
        sum1+=a;
    for(b=2;b<=100;b=b+2)
        sum2+=b;
    printf("%d %d",sum1,sum2);
    return 0;
}
