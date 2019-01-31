#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
        b=a;
    if (b>c)
        c=b;
    printf("%d",c);
    return 0;
}
