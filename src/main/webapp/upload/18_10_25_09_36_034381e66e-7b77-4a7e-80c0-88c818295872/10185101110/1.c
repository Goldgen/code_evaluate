#include<stdio.h>
int main()
{
	int a,d;
	double b,c;//a为初始高度，b为某一次的路程，c为总路程,d为次数 
	a=100;
	d=1;
	b=a;
	c=0; 
	while (d<10)
	{
		b=b/2;
		d++;
		c=c+b;
	 } 
	 c=2*c+100;
	b=b/2;
	printf("%.3f %.3f",c,b);
	return 0;
 } 