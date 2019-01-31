#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num ,ten ,one ;
    scanf("%d",&num);
    one = num%10;
    ten = num/10;
    printf("%d %d",one,ten);
    return 0;
}