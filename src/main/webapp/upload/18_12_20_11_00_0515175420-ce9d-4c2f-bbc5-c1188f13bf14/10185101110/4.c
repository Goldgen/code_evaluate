#include<stdio.h>
#include<string.h>
void a(char *p);
int main()
{
	char arr[30];
	gets(arr);
	a(&arr[0]);
	return 0;
	
 }
 void a(char *p)
 {
 	if(*p=='?')
 	return 
	;
 	else
 	{
 		a(p+1);
 		printf("%c",*p);
	 }
 	
  } 