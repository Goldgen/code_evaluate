#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);
    if((a>=b&&b>=c)||(c>=b&&b>=a))
        printf("%d",b);
    else if((b>=a&&a>=c)||(c>=a&&a>=b))
        printf("%d",a);
    else
        printf("%d",c);

    return 0;
}
