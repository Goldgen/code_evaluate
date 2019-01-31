#include<stdio.h>

int main()
{
	char A;
	scanf("%c",&A);
	if((A=='a')||(A=='e')||(A=='i')||(A=='o')||(A=='u'))
	{
		printf("vowel");
	}
	else if(A<='z' && A>='b')
	{
		printf("consonant");
	}
	else
	{
		printf("ERROR");
	}
	return 0;
}