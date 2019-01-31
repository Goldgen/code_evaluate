#include<stdio.h>
int main(void)
{
    int num,a,b;
    scanf("%d",&num);
    a=num%10;
    b=(num/10)%10;
    printf("%d %d",a,b);
    return 0;

}
