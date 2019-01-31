#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a>=c)d=a;
    else if(b>=a&&b>=c)d=b;
    else d=c;
    printf("%d",d);
        
    
    return 0;
}
