#include <stdio.h>
int main()
{
	float H=100.0,h=100.0;
	for(int i=1;i<=9;i++)
	{
		h=0.5*h;
		H=H+2*h;
	}
	printf("%.3f %.3f",H,0.5*h);
	return 0;
}