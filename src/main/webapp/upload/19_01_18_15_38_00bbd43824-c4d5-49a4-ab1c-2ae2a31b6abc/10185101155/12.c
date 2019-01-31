#include<stdio.h>
int main()
{
    double a,b,c;
    char n;
    scanf("%lf%c%lf",&a,&n,&b);
   if (n == 43)
   {
       c = a+b;
   }
   else if(n == 45)
   {
       c = a-b;
   }
    else if(n == 42)
   {
       c = a*b;
   }
    else if(n == 47)
   {
       c = a/b;
   }
   printf("%.3lf",c);
   return 0;

}