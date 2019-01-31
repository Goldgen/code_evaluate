#include <stdio.h>

int main()
{
	char letter;
	scanf("%c",&letter);
	switch(letter)
	{
		case 'a':printf("vowel");break;
		case 'e':printf("vowel");break;
		case 'i':printf("vowel");break;
		case 'o':printf("vowel");break;
		case 'u':printf("vowel");break;
		default:
			if('a'<=letter&&letter<='z')
				printf("consonant");
			else printf("ERROR");
			break;
	}
	return 0;
}