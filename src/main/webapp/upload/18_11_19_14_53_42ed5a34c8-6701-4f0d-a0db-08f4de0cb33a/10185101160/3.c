#include <stdio.h>
void PrintNumber()
{
	int a;
	static int i=0;
	scanf("%d",&a);
	if(a > 0)
	{
		PrintNumber();
		i++;
		if(i==1)
			printf("%d",a);
		else
			printf(" %d",a);
	}
}
int main()
{
	PrintNumber();
	return 0;
}