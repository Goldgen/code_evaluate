#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int b = a/10;
    int c = a-b*10;
    printf("%d %d",c,b);
    return 0;
}