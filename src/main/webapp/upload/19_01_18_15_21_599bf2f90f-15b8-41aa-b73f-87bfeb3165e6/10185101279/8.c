#include <stdio.h>
#include<string.h>

int main()
{
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   if(a==b)
    printf("%d",a);
   else if(a==c)
    printf("%d",a);
   else if(b==c)
    printf("%d",b);
    else if(a>b&&a<c||a<b&&a>c)
        printf("%d",a);
    else if(b>a&&b<c||b<a&&b>c)
        printf("%d",b);
    else 
        printf("%d",c);
    return 0;
}



