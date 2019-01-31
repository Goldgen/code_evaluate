#include <stdio.h>
#define SIZE 100
int print()
{
	char a;
	a = getchar();
	if(a == '?')
		return 0;
	print();
	putchar(a);
}
int main()
{
	print();
}