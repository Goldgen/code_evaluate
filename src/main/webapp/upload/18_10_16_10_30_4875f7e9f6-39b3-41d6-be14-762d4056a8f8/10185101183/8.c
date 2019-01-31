#include<stdio.h>
int main(voin)
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>=b&&a<=c)||(a>=c&&a<=b))
        printf("%d",a);
    else if((b>=a&&b<=c)||(b>=c&&b<=a))
        printf("%d",b);
    else
        printf("%d",c);
    return 0;
}
