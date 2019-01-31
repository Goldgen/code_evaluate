#include <stdio.h>
int main()
{
 double h=100;
 double s=0;
 int i=0;
 for(i=0;i<10;i++)
 {
   if(i==0)
   {
   	s=h;
   	h=h/2;
   }
   else
   {
    s+=2*h;
	 h=h/2;
   }
 }
 printf("%.3lf %.3lf",s,h);
 return 0;
}