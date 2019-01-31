#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	scanf("%c",&ch);
	if(islower(ch))
		switch(ch)
		{
			case 'a':printf("vowel");
				break;
			case 'e':printf("vowel");
				break;
			case 'i':printf("vowel");
				break;
			case 'o':printf("vowel");
				break;
			case 'u':printf("vowel");
				break;
			default:printf("consonant");
				break;
		}
	else
		printf("ERROR");
	return 0;
}