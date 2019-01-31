#include <stdio.h>
#include <string.h>
int main()
{
    char words[81];
    gets(words);
    int len = strlen(words);
    for(int i = 0; i < len; i++)
    {
    	if(words[i] < 115)
    		words[i] = (words[i] - 91) / 3 + 48;
    	else if(words[i] == 122)
    		words[i] == '9';
    	else
    		words[i] = (words[i] - 92) / 3 + 48;
    }
    puts(words);
}