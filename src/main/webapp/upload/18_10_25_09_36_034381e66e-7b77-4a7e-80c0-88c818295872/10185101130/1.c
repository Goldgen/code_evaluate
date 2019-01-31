#include<stdio.h>

int main(void)
{
	int i=1;
	float h=100,total=100;
	while(i<=9){
		h*=0.5;
		total+=2*h;
		i++;
	}
	
	printf("%.3lf %.3lf",total,h*0.5);
	return 0;
 } 