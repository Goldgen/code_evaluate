#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);
    printf("%d %d",a%10,(a-a%10)/10);
    return 0;
}