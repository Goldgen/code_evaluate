#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=0;
   int b=0;

   scanf("%d %d",&a,&b);

   while((a!=0)&&(b!=0))
   {
    while(a>b)
        a=a-b;
    while(a<=b)
        b=b-a;
   }
   if(a==0)
   {
        printf("最大公约数是: %d",b);
   }
   else if(b==0)
    {
        printf("最大公约数是: %d",a);
    }
}

