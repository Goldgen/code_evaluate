#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	if(a==100)
	{
	printf("0 0");
	}
	else
	{
	b=a%10;
	c=(a-b)/10;
	printf("%d %d",b,c);
	}
	return 0;
}