#include <stdio.h>
int main()
{
	char a,b;
	scanf("%c %c",&a,&b);
	if(a==b)
		printf("Tie");
	else if( (a=='R'&&b=='S') ||(a=='S'&&b=='C') || (a=='C'&&b=='R') )
		printf("Alice");
	else
		printf("Bob");
	return 0;
}
