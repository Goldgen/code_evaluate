#include <stdio.h>

int main()
{
	char a;
	scanf("%c",&a);
	if('A'<=a&&a<='Z')
	{
		a=a+'a'-'A';
		printf("%c",a);
	}
	else
		printf("ERROR");
	return 0;
} 