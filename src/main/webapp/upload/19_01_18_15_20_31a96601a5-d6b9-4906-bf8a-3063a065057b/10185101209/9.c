#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);
    printf("%d",a>0 ? 1:(a=0 ? 0:-1));
    return 0;
}
