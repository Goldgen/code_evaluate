#include<stdio.h>	
int GDB(int a, int b)
{	
	if (b == 0)
  	return a;
	if (b > 0)
	return GDB(b,a%b);
}
int main()
{
	int a,b,c;
	scanf("%d %d",&a,&b);
	c = GDB(a,b);
	printf("%d",c);
	return 0;
}