#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b&&a>=c)
        if (b>=c)d=b;
        else d=c;
    else if(b>=a&&b>=c)
        if (a>=c)d=a;
        else d=c;
    else if(c>=a&&c>=b)
        if (a>=b)d=a;
    else d=b;
        
    printf("%d",d);
    
    return 0;
}
