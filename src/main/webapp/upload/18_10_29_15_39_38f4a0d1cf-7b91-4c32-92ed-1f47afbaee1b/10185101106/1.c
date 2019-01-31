#include<stdio.h>
int main()
{
	int a=1,b=1,c;
	for(a=1;a<=14;a++)
	{for(b=1;b<20;b++)
	{c=100-a-b;
	if(7*a+5*b+c/3.0==100)
	printf("%d %d %d",a,b,c);}}
	return 0;	
 } 