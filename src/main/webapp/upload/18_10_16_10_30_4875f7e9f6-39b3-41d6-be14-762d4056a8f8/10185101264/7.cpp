#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        printf("%d",a);
    else if(b>a&&b>c&&b>d)
        printf("%d",b);
    else if(d>a&&d>b&&d>c)
        printf("%d",d);
    else
        printf("%d",c);

    return 0;
}
