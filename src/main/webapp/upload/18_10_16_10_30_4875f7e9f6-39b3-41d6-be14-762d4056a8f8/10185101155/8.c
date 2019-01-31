#include<stdio.h>
int main()
{
   int a,b,c,d;
   scanf("%d %d %d",&a,&b,&c);
   if(a >= b)
   {
       if(a >=c)
       {
           d = (b >= c)?b:c;
       }
       else
       {
           d = a;
       }
   }
   else
   {
       if(b >= c)
       {
           d = (a >= c)?a:c;
       }
       else
       {
           d = b;
       }
   }
   printf("%d",d);
   return 0;

}
