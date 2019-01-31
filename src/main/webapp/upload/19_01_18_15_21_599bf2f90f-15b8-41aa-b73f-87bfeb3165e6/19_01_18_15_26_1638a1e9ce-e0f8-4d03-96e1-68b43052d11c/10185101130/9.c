#include<stdio.h>

int main(void)
{
	double a;
	scanf("%lf",&a);
	if(a<0)
	  printf("-1");
	else if(a>0)
	  printf("1");
	else
	  printf("0");
	
	return 0;
}