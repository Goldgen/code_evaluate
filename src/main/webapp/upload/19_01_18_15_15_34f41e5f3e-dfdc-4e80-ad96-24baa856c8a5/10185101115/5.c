#include <stdio.h>
#include <stdlib.h>

int main()
{int a=1,b=2;
int c=0,d=0;
for(;a<100;a+=2)
{
    c+=a;
}
for(;b<=100;b+=2)
{
    d+=b;
}
printf("%d %d",c,d);

    return 0;
}
