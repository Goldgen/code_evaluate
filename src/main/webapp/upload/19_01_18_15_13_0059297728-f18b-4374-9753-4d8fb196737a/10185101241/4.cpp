#include<stdio.h>

int main()
{
	char GG;
	scanf("%c",&GG);
	if( (GG>='A')&&(GG<='Z') )
	{
		GG=GG+32;
		printf("%c",GG);
	 } 
	 else
	 {
	 	printf("ERROR");
	 }
	 return 0; 
 } 