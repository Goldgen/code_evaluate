#include <stdio.h>
#include <math.h>
int main(void)
{
    int num;
    scanf("%d",&num);
    printf("%d ",num%10);
    num /= 10;
    printf("%d",num%10);
    return 0;
}

