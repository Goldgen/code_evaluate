#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    scanf ("%d",&a);
    b=a%10;
    c=(a-b)/10;
    printf("%d %d",b,c);
    return 0;
}
