#include<stdio.h>
int main(void)
{
int a=0;
int b=0;
int c=0;
int d=0;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
if(a>=b&&a>=c&&a>=d)
    printf("%d",a);
else if(b>=a&&b>=c&&b>=d)
    printf("%d",b);
else if(c>=a&&c>=b&&c>=d)
    printf("%d",c);
else
    printf("%d",d);
    return 0;
}
