#include<stdio.h>
#include<ctype.h>
int main ()
{
   double x,y;
   char c;
   scanf("%lf%c%lf",&x,&c,&y);
   switch(c)
   {
       case'+':printf("%.3lf",x+y);break;
         case'-':printf("%.3lf",x-y);break;
           case'*':printf("%.3lf",x*y);break;
             case'/':printf("%.3lf",x/y);break;
	   default:break;
            
   }


}