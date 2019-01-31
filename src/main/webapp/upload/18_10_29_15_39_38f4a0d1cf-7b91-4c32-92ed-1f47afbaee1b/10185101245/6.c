#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b;
 int c;
 scanf("%d %d",&a,&b);

     while(b!=0)
     {
         c=a%b;
         a=b;
         b=c;

     }


    printf("最大公约数是: %d",a);

return 0;
}
