#include<stdio.h>
int main(void)
{
int a=0;
int b=0;
int c=0;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>=b&&a>=c)
    printf("%d",a);
else if(b>=a&&b>=c)
    printf("%d",b);
else
    printf("%d",c);
    return 0;
}
