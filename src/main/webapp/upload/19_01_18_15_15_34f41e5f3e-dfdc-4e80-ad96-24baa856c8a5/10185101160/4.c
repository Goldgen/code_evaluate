#include <stdio.h>
#include <math.h>
int main()
{
	double a,max,min;
	scanf("%lf",&a);
	max=a;
	min=a;
	while(a>=0)
	{
		scanf("%lf",&a);
		if(a>max)
		max=a;
		if(a<min&&a>=0)
		min=a;
	}
	printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
	return 0;	
}