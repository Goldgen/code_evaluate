#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if((a>=b&&b>=c)||(c>=b&&b>=a)){
        printf("%d",b);
    }
    else if((a>=c&&c>=b)||(b>=c&&c>=a)){
        printf("%d",c);
    }
    else if((b>=a&&a>=c)||(c>=a&&a>=b)){
        printf("%d",a);
    }
    return 0;

}
