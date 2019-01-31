#include <stdio.h>

int main()
{
	double min=100,max=0,input;
	while(scanf("%lf",&input))
	{
		if(input<0)
			break;
		if(input<min)
			min=input;
		if(input>max)
			max=input;
	}
	printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
	return 0;
}
