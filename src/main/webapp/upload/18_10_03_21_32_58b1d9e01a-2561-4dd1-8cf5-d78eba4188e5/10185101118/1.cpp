#include<stdio.h>
#include<math.h>
int main()
{
	float d,p,r,m;
	scanf("%f%f%f",&d,&p,&r);
	r=r/100;
	m=log(p/(p-d*r))/log(1+r);
	if(m-(int)m>=0.5)
	{
		printf("%d",(int)m+1);
	}
	else
	{
		printf("%d",(int)m);
	}
	return 0;
}