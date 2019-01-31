#include <stdio.h>


int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); 
    if((a>b&&a<c)||(a>c&&a<b))
        printf("%d",a); 
    if((b>a&&b<c)||(b>c&&b<a))
        printf("%d",b);
    if((c>a&&c<b)||(c>b&&c<a))
        printf("%d",c);
    if(a==b)
        printf("%d",a);
    if(b==c)
        printf("%d",b);
    if(a==c)
        printf("%d",a);

}