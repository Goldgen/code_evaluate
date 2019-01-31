#include<stdio.h>
int main(void)
{
	char ch1;
	scanf("%c",&ch1);
	if(ch1>=65&&ch1<=90)
		printf("%c",ch1+'a'-'A');
	else
		printf("ERROR");
	return 0;
}