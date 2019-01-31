
#include <stdio.h>
#include <math.h>
int main()
{
    int sum1=0,sum2=0;
    for(int a=1;a<=99;a+=2)sum1+=a;
    for(int b=2;b<=100;b+=2)sum2+=b;
    printf("%d %d",sum1,sum2);
}