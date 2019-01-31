#include<stdio.h>
#include<math.h>

int main(void)
{
	int d,p,r;
	double m;
	scanf("%d %d %d",&d,&p,&r);
	m=round(log(p/(p-d*r/100.0))/log(1+r/100.0));
	printf("%.0f",m);
	return 0;
 } 