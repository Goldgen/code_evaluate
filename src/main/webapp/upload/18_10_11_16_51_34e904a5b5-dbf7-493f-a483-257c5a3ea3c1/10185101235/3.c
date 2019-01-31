#include<stdio.h>

main()
{
    int num = 0;
    int a = 0;
    int b = 0;
    scanf("%d",&num);
    a = num%10;
    b = (num - a)/10;
    printf("%d %d",a,b);
}
