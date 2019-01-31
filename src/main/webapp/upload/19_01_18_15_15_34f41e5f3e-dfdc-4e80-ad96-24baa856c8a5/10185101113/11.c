#include <stdio.h>
int main()
{
 int num=0,n=0;
 int a=0,b=0,c=0;
 for(num=100;num<1000;num++)
 {
     a=num/100;
     b=num/10%10;
     c=num%10;
     if(a*a*a+b*b*b+c*c*c==num)
     {
         n++;
         if(n>1)
         printf(" ");
         printf("%d",num);
     }
 }
 return 0;
}
