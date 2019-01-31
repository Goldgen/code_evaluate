#include<stdio.h>
int main()
{
	char A,B;
scanf("%c %c",&A,&B);
	if(A=='S'&&B=='C')
	printf("Alice");
	else if	(A<B)
	printf("Alice");
	else if(A>B)
	printf("Bob");
	else if(A==B)
	printf("Tie");
	return 0;
 } 
