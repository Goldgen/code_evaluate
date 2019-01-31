#include<stdio.h>
int main()
{
	int a=6;
	for(;a<=100;a+=10)
	{
		if(a%3==0&&a!=96)
		printf("%d ",a);
		if(a==96)
		printf("96");
	}
	return 0;
	

 } 