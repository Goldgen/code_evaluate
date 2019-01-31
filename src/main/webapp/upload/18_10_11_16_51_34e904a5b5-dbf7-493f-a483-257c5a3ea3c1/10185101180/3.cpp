#include <stdio.h>
int main()
{
    int num,one,two;
    scanf("%d",&num);
    one=num%10;
    two=num/10;
    printf("%d %d",one,two);
    return 0;
}
