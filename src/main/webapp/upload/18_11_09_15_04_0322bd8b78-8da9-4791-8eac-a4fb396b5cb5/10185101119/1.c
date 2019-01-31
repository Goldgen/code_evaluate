#include <stdio.h>
int main()
{
	char A,B;
	scanf("%c %c",&A,&B);
	if(A=='S'&&B=='R'||A=='R'&&B=='C'||A=='C'&&B=='S')
	printf("Bob");
	else if(B=='S'&&A=='R'||B=='R'&&A=='C'||B=='C'&&A=='S')
	printf("Alice");
	else printf("Tie");return 0;} 