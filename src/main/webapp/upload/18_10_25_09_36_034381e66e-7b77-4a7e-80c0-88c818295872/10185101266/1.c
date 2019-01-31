#include<stdio.h>
int main(void)
{
	double h=100,s=-100;
	int n=1;
	
	while(n<=10)
	{
		s=s+2*h;
		h=h/2;
		n=n+1;
	}
	
	printf("%.3f %.3f",s,h);
    return 0;
}