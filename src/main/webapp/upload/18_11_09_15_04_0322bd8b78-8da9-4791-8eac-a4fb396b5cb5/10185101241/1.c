#include<stdio.h>

int main()
{
	char A,B;
	scanf("%c %c",&A,&B);
	if(A=='S')
	{
		if(B=='C') printf("Alice");
		else if(B=='S') printf("Tie");
		else printf("Bob");
	}
	else if(A=='C')
	{
		if(B=='R') printf("Alice");
		else if(B=='C') printf("Tie");
		else printf("Bob");
	}	
	else if(A=='R')
	{
		if(B=='S') printf("Alice");
		else if(B=='R') printf("Tie");
		else printf("Bob");
	}
	return 0;
} 