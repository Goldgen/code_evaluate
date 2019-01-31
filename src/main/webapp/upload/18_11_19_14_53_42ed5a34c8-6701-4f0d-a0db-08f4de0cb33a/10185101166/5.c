#include<stdio.h>

int GDB(int a, int b)
{
	int c , d;
	c = a % b;
	d = (c==0) ? b : GDB(b,c);
	return d;
}

int main()
{
	int a, b,m;
	scanf("%d %d",&a,&b);
	m = (a > b) ? GDB(a,b) : GDB(b,a);
	printf("%d",m);
 } 