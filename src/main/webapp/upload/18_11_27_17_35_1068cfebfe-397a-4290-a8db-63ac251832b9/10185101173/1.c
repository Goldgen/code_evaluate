#include <stdio.h>
#include <stdlib.h>

int main()
{
     double a[5],sum=0;
     scanf("%lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4]);
     for(int i=0;i<5;++i)
     {
         a[i]=1/a[i];
         sum+=a[i];
     }
     printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n%.6lf",a[0],a[1],a[2],a[3],a[4],sum);
     return 0;
}
