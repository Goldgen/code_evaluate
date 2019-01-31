#include<stdio.h>
int main()
{
	double a,max=0,min=100;
	while (1)
	{
		scanf ("%lf",&a);
		if (a<0)
		{
			break;
		}
		if (max<a)
		{
			max=a;
		}
		if (min>a)
		{
			min=a;
		}
	}
	printf ("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
}