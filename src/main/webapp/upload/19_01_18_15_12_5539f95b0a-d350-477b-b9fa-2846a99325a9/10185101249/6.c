#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)
        printf("%d",a);
    if(b>a&&b>=c)
        printf("%d",b);
    if(c>a&&c>b)
        printf("%d",c);
    return 0;
}
