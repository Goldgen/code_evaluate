#include<stdio.h>
int main()
{
    int sum1=0;
    int sum2=0;
    for(int a=1;a<=100;a=a+2)
        sum1=sum1+a;
    for(int b=2;b<=100;b=b+2)
        sum2=sum2+b;
    printf("%d %d",sum1,sum2);
    return 0;
}
