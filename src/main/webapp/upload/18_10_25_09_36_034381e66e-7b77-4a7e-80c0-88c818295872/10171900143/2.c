#include <stdio.h>
#include <math.h>


int main()
{
   double a[5];
   for(int i=0;i<5;i++){
    scanf("%lf",&a[i]);
   }
   printf("%.1f",(a[0]+a[1]+a[2]+a[3]+a[4])/5);
    return 0;
}
