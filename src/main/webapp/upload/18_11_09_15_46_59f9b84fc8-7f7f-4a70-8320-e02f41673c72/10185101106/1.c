#include<stdio.h>
int main()
{
	int n=16;
	printf("6");
	for(;n<100;n+=10)
	{
		if(n%3==0)
		printf(" %d",n);
	}
 } 