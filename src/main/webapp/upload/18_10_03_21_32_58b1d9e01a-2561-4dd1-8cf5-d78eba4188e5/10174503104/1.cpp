#include <stdio.h>
#include <math.h>
int main(){
	double m,d,p,r;
	scanf("%lf %lf %lf",&d,&p,&r);
	r=r/100;
	m=log(p/(p-d*r))/log(1.0+r);
	printf("%d",(int)floor(m+0.5));
	return 0;
}