#include<stdio.h>
#include<math.h>
int main()
{
	float d,p,r,m;
	scanf("%f %f %f\n",&d,&p,&r);
	r=r/100;
	m=log(p/(p-d*r))/log(1+r);
	printf("%.0f",m);
	return 0;
}