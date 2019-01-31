#include <stdio.h>
int main()
{
    int number=0;
    int a=0;
    int b=0;
    scanf("%d",&number);
    a=number/10;
    b=number%10;
    printf("%d %d",b,a);
    return 0;
}
