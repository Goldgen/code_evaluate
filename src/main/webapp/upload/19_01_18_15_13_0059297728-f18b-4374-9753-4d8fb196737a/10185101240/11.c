#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input;
	scanf("%c",&input);
	if((input>='a')&&(input<='z'))
	{
		switch(input){
		case'a':case'e':case'i':case'o':case'u':
	    printf("vowel");break;
		default:printf("consonant");break;}
	}
	else
		printf("ERROR");
	return 0;
}