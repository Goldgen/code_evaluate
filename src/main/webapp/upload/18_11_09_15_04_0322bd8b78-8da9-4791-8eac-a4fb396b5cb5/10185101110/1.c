#include<stdio.h>
int main()
{
	char a,b;
	scanf("%c %c",&a,&b);
	if((a=='S'&&b=='C')||(a=='R'&&b=='S')||(a=='C'&&b=='R'))
	printf("Alice");
else if((b=='S'&&a=='C')||(b=='R'&&a=='S')||(b=='C'&&a=='R'))
	printf("Bob");
	else
	printf("Tie");
	return 0;
 } 