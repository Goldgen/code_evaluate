#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((b>=c&&b<=a)||(b>=a&&b<=c))
    {
        printf("%d",b);
    }
    else if ((a>=c&&a<=b)||(a>=b&&a<=c))
    {
        printf("%d",a);
    }
    else{
        printf("%d",c);
    }
    return 0;
}
