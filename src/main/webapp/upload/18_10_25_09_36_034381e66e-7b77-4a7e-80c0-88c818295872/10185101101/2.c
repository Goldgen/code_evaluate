#include <stdio.h>
int main(){
	double a[5];
	double ave,sum=0.0L;
	int i = 0;
	for(i=0;i<5;i++)
	{scanf("%lf",&a[i]);
		sum+=a[i];}
	ave=(double)sum/5;
	printf("%.1lf",ave);
	return 0;
}