#include <stdio.h>
int GDB(int a, int b)
{
	static int c=0;
	if (b == 0)
		c = a;
	else	
		GDB(b, a%b);
	return c;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",GDB(m,n));
	return 0;
}