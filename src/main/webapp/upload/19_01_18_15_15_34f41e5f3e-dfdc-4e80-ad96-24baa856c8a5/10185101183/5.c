#include<stdio.h>
int main(void)
{
    int a=1;
    int b=2;
    int i=3;
    int j=4;
    for(;i<=100;i=i+2)
        a=a+i;
    for(;j<=100;j=j+2)
        b+=j;
    printf("%d %d",a,b);
    return 0;
}
