#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double ab(double a,double b)
{
   return a>b?a-b:b-a;
}
int main()
{  double a,b;
   scanf("%lf%lf",&a,&b);
   printf("%.8lf %.8lf %.3lf",a,b,sqrt(ab(a,b)));
   return 0;


}
