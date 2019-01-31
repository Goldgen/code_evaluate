#include <stdio.h>
#include <string.h>



int main()
{
	char str[81];
	gets(str);
	int max=0,p,word_length=0;
	int l=strlen(str);
	for(int i=0;i<l;i++){
		if(str[i]!=' '){
			word_length++;
			if(max<word_length){
				max=word_length;
				p=i;
			}
		}
		else{
			word_length=0;
		}
		} 
	char longest_word[255];
	for(int i=0;i<max;i++){
		longest_word[i]=str[p-max+i+1];
	}
	for(int i=0;i<max;i++){
		printf("%c",longest_word[i]);
	}
	printf("\n");
}

