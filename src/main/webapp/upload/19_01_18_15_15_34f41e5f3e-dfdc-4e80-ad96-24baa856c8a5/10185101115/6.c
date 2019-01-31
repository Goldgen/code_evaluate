#include <stdio.h>
#include <stdlib.h>

int main()
{unsigned int a,b;
scanf("%u %u",&a,&b);
unsigned int c;
c=a%b;
for(;c!=0;)
{
    a=b;
    b=c;
    c=a%b;
}
printf("最大公约数是: %u",b);

    return 0;
}
