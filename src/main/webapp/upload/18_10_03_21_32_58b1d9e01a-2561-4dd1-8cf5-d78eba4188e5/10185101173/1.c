#include <stdio.h>
#include <math.h>

int main(void)
{double d,p,r;
 scanf("%lf%lf%lf",&d,&p,&r);
 r=0.01*r;
 printf("%.f",log(p/(p-d*r))/log(1+r));
 return 0;
}
