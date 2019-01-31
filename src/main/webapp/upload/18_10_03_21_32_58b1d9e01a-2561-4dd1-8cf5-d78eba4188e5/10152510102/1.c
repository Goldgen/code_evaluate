#include<stdio.h>
#include<math.h>
int main()
{
	float d,p,r,m;
	int n;
	scanf("%f%f%f",&d,&p,&r);
	r/=100;
	m=(float)log(p/(p-d*r))/(float)log(r+1);
	n=(int)(m+0.5)>(int)m?(int)m+1:(int)m;
	printf("%d",n);
	return 0;
}