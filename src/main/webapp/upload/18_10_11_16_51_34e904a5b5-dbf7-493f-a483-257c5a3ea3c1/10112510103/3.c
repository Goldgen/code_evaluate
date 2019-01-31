#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sd,td;
    scanf("%d",&num);
    sd = num%10;
    td = num/10;
    printf("%d %d",sd,td);
    return 0;
}