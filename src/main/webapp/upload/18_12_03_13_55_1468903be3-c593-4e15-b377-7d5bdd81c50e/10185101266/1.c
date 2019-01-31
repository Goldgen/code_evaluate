#include<stdio.h>
#include<string.h>
int main(void)
{
	char word[81];

	gets(word);
	int i, k;
	k = strlen(word);
	for (i = 0; i < k; i++) {
		switch(word[i])
		{
			case 'a':case 'b':case 'c':word[i] = '2';break;
		    case 'd':case 'e':case 'f':word[i] = '3';break;
			case 'g':case 'h':case 'i':word[i] = '4';break;
			case 'j':case 'k':case 'l':word[i] = '5';break;
			case 'm':case 'n':case 'o':word[i] = '6';break;
			case 'p':case 'q':case 'r':case 's':word[i] = '7';break;
			case 't':case 'u':case 'v':word[i] = '8';break;
			default:word[i]='9';break;
		}
	}
		puts(word);
	return 0;
}