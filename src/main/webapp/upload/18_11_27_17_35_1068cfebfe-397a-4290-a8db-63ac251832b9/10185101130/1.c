#include <stdio.h>
#include <stdlib.h>

int main()
{
   double arr[5];
   int i = 0;
   double sum = 0.0;
   while(i <= 4)
   {
       scanf("%lf",&arr[i]);
       sum += (1.0/arr[i]);
       if(i == 4)
        printf("%.2lf",1.0/arr[i]);
       else
        printf("%.2lf ",1.0/arr[i]);
       i++;
   }
   printf("\n%.6lf",sum);
   return 0;
}

