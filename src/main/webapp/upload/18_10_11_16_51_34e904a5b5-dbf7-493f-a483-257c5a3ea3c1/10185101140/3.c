#include <stdio.h>

int main(void)
{
    int num = 0;
    scanf("%d",&num);

    printf("%d %d",num%10,(num-(num%10))/10);

    return 0;
}