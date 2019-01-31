#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    a=a+b+c;
    scanf("%d %d %d",&b,&c,&d);
    b=b+c+d;
    scanf("%d %d",&c,&d);
    printf("%d\n",a+b+c+d);
    scanf("%d,%d,%d",&a,&b,&c);
    a=a+b+c;
    scanf("%d,%d,%d",&b,&c,&d);
    b=b+c+d;
    scanf("%d,%d",&c,&d);
    printf("%d",a+b+c+d);
    return 0;
}
