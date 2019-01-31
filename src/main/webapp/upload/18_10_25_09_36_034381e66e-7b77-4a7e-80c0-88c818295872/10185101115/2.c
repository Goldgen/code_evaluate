#include <stdio.h>
#include <stdlib.h>

int main()
{float b,sum=0;
for(int i=0;i<5;++i)
{
    scanf("%f",&b);
    sum+=b;
}
float a;
a=sum/5;
printf("%.1f",a);
    return 0;
}