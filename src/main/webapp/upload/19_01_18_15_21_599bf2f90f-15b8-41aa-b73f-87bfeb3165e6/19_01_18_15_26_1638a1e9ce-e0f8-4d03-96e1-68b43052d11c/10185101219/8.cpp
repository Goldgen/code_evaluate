#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&b>=c)
       d=b;
    if(b>=a&&a>=c)
       d=a;
    if(c>=a&&a>=b)
       d=a;
    if(c>=b&&b>=a)
       d=b;
    if(a>=c&&c>=b)
       d=c;
    if(b>=c&&c>=a)
       d=c;


    printf("%d",d);
    return 0;
}

