#include <stdio.h>
float RunningAvg(float value)
{	
	static int i=1;
	static float sum=0,avg=0;
	sum = sum + value;
	avg = sum / i;
	i++;
	printf("%.2f\n",avg);
	return 0;
}
int main()
{	
	float a=0;
	while(~scanf("%f",&a) && a!= -1)
		RunningAvg(a);
	return 0;
}