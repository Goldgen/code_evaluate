#include <math.h>
int main(void)
{
	int d,p,m;
	float r;
	scanf("%d%d%f",&d,&p,&r);
	r=r*0.01;
	m=log(p/(p-d*r))/log(1+r)+0.4999;
	printf("%d",m);
	return 0;
}
