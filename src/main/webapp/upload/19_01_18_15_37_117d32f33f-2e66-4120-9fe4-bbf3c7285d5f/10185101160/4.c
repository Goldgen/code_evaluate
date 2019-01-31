#include <stdio.h>
int main()
{
	char a;
	int b ='a'-'A';
	scanf("%c",&a);
	if(a>='A'&&a<='Z')
		printf("%c",a+b);
	else
	printf("ERROR");
}