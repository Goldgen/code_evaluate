#include<stdio.h>
#include<math.h>

int main()
{
	float d,p,r,result;
	scanf("%f%f%f",&d,&p,&r);
	r*=0.01;
	result=log(p/(p-d*r))/log(1+r);
	printf("%.0f",ceil(result));
	return 0;
}