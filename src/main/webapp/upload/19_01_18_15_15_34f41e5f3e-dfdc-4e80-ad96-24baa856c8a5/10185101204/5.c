#include <stdio.h>
int main()
{int a=0,b=0;
for(int i=1;i<100;i=i+2)
    a += i;
for(int i=0;i<=100;i=i+2)
    b += i;
printf("%d %d",a,b);

}