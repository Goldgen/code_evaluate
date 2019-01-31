#include <stdio.h>
int main()
{   int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&e);
    if(a>=b&&a>=c&&a>=e)
    d=a;
    else if(b>=a&&b>=c&&b>=e)
    d=b;
    else if(c>=a&&c>=b&&c>=e)
    d=c;
    else
    d=e;
    printf("%d",d);

	
}