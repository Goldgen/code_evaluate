#include <stdio.h>

void daoxu()
{
	char a;
	scanf("%c", &a);
	if (a=='?')
		return 0;
	daoxu();
	printf("%c",a);
}
int main(void)
{
	daoxu();

	return 0;
}