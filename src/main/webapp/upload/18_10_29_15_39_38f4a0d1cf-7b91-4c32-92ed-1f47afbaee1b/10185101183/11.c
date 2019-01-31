#include <stdio.h>
int main()
{
   int i=100;
   int a=0;
   int b=0;
   int c=0;
   for(;i<1000;++i)
   {
     a=(i%100)%10;
     b=((i-a)/10)%10;
     c=((i-a-b*10)/100)%10;
     if(i==a*a*a+b*b*b+c*c*c)
	 {if(i<400)
        printf("%d ",i);
	   else
		printf("%d",i);
	 }
   }
     return 0;
}
