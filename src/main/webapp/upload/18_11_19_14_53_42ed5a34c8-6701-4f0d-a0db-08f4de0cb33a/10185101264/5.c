#include <stdio.h>
int GDB(int a, int b)
{
	if(b == 0)
		return a;
	GDB(b, a % b);
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", GDB(a, b));
}
