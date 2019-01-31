#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=0;
    int c=0;
	scanf("%d %d %d ",&a,&b,&c);
    if((a>=c&&a<=b)||(a<=c&&a>=b))
        printf("%d",a);
    else if((c>=a&&c<=b)||(c>=b&&c<=a))
        printf("%d",c);
    else
        printf("%d",b);
    return 0;
}
