#include <stdio.h>

int main()
{
    int a,b,c=0;
    scanf("%d %d %d",&a,&b,&c);
    if((a>b&&b>c)||(c>b&&b>a))
		printf("%d",b);
    if((b>a&&a>c)||(c>a&&a>b))
        printf("%d",a);
    if((a>c&&c>b)||(b>c&&c>a))
        printf("%d",c);
    if(a==b||a==c||b==c)
    {
      if(a==b||a==c)
         printf("%d",a);
      else
        printf("%d",b);
   }
 return 0;
}