#include<stdio.h>
int main()
{
	char a1,b1;
	scanf("%c %c",&a1,&b1);
	if(a1=='S'&&b1=='C')
	printf("Alice");
	if(a1=='R'&&b1=='S')
	printf("Alice");
	if(a1=='C'&&b1=='R')
	printf("Alice");
	if(a1=='C'&&b1=='S')
	printf("Bob");
	if(a1=='S'&&b1=='R')
	printf("Bob");
	if(a1=='R'&&b1=='C')
	printf("Bob");
	if(a1=='C'&&b1=='C')
	printf("Tie");
	if(a1=='S'&&b1=='S')
	printf("Tie");
	if(a1=='R'&&b1=='R')
	printf("Tie");
}