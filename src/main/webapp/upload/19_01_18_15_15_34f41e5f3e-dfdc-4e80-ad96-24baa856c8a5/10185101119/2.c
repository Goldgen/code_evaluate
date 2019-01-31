#include <stdio.h>
int main()
{
	float e=1.0f,n=1.0f;
	for(int a=2;a<=100000;a++)
	{
		e=e+1/n;
		n=n*a;
	}
	printf("%.6f",e);
	return 0;
} 