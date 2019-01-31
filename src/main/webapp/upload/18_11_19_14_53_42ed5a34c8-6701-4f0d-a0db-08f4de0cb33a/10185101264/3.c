#include <stdio.h>
int flag = 0;
int print()
{
	int n;
	scanf("%d", &n);
	if(n > 0)
		print();
	else
	{
		flag++;
		return 0;
	}
	if(flag)
	{
	    printf("%d", n);
		flag--;
	}
	else
		printf(" %d", n);
}
int main()
{
	print();
}
