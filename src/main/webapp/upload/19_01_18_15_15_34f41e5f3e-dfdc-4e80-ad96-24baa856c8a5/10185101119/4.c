#include <stdio.h>
int main()
{
	float max=0.0f,min=100.0f,n=0.0f;
	for(;;)
	{
		scanf("%f",&n);
		if(n<0)
		break;
		if(n>=max)
		max=n;
		if(n<=min)
		min=n;
	}
	printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
	return 0;
}