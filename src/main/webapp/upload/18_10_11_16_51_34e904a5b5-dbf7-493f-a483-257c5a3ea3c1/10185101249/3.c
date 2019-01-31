#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d",&a);
    b = a%10;
    c = (a-b)/10;
    printf("%d %d",b,c);
    return 0;
}