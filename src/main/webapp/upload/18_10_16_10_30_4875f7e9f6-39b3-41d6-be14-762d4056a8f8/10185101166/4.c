#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if ('A'<=a&&a<='Z') {
		a=a-'A'+'a';
		printf("%c",a);
	} else  
		printf("ERROR");
	
 } 