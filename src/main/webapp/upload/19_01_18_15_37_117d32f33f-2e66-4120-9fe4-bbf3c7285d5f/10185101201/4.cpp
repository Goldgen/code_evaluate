#include <stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if((a>='A')&&(a<='Z'))
		printf("%c",a+'a'-'A');
	else
		printf("ERROR");
}


	