#include <stdio.h>
void DtoB(int x)
{
	if(x == 1)
	printf("1");
	else
	{
		DtoB(x/2);
		printf("%d",x%2);
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	DtoB(a);
	return 0;
}