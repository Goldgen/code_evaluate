#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,mid;
    scanf("%d %d %d",&a,&b,&c);
    if((a>=b&&b>=c)||(c>=b&&b>=a)) mid=b;
    if((b>=a&&a>=c)||(c>=a&&a>=b)) mid=a;
    if((a>=c&&c>=b)||(b>=c&&c>=a)) mid=c;
    printf("%d",mid);
    return 0;
}