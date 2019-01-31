#include <stdio.h>
#include <string.h>
char word[1000]; 

int main(){
	gets(word);
	int l=strlen(word);
	for (int i=0;i<l;i++)
	{
		if (word[i]!=word[l-i-1])
		{
			printf("False");
			return 0;
		}
	}
	printf("True");
	return 0;
} 