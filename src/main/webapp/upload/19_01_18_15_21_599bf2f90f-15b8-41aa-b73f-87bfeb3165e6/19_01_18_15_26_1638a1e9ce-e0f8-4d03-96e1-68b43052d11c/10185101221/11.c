#include <stdio.h>
#include <ctype.h>
int main()
{
	char letter;
	scanf("%c",&letter);
	if (!islower(letter))
	 printf("ERROR");
	else
	{
		switch(letter)
		{
			case 'a': case 'e': case 'i' : case 'o': case 'u':
				printf("vowel");
				break;
			default:
				printf("consonant");
				break;
		}
	}
	return 0;
}