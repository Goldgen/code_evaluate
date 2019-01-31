#include <stdio.h>

int main()
{
    int num=0;
    int num1;
    int num2;
    scanf("%d",&num);

    num1=num%10;//个位数
    num2=num/10;//十位数

    printf("%d %d",num1,num2);
    return 0;
}