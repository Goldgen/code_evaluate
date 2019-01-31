#include<stdio.h>
#include<string.h>
int main()
{
	char Alice,Bob;
	scanf("%c %c",&Alice,&Bob);

	if((Alice=='S'&&Bob=='R')||(Alice=='R'&&Bob=='C')||(Alice=='C'&&Bob=='S'))
		printf("Bob");
	else if(Alice==Bob)
		printf("Tie");
	else
		printf("Alice");
	return 0;
}
