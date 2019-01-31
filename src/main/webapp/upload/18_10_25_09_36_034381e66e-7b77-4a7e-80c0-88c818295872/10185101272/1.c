#include<stdio.h>
int main(){
	int i;
	double sum=0,h=100;
	for(i=1;i<=10;i++)
		sum+=h*1.5,h/=2;
	printf("%.3lf %.3lf",sum-h,h);
	return 0;
} 