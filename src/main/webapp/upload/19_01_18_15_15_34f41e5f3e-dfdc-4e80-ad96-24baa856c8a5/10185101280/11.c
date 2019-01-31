#include<stdio.h>

int main()
{
    int a,b,c,d,e;
  for(a=100;a<=999;a++){
   b=a;
   d=b%10;
   c=(b/10)%10;
   e=b/100;
   if(c*c*c+d*d*d+e*e*e==a)
   {
       if(e<=1){
        printf("%d",a);

       }
   else
   printf(" %d",a);
   }
}


return 0;
}

