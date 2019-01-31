#include <stdio.h>
#include <ctype.h>
int main()
{
	char character;
	scanf("%c",&character);
	if((character>='A') && (character<='Z'))
	  printf("%c",tolower(character));
	else
	  printf("ERROR");
	return 0;
}