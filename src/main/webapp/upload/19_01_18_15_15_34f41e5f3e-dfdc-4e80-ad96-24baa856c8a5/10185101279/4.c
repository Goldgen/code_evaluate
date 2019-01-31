#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{

   double c;
   double max,min;
   scanf("%lf",&c);

   max=min=c;
	while(1)
   {
       scanf("%lf",&c);
       if(c<0)
        break;
       if(c>max)
        max=c;
       if(c<min)
        min=c;
   }
   printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);



  return 0;
}
















