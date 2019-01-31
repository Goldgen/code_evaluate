#include<stdio.h>
int main(void)
{
    int num;
    int a;
    int b;
    scanf("%d",&num);
    a=num%10;
    b=num/10;
    printf("%d %d",a,b);
    return 0;

}