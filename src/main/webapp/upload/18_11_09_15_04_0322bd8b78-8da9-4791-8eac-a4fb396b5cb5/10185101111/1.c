#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
	char a,b;
	scanf("%c %c",&a,&b);//请输入俩个人的猜拳；
	if(a==b){
	printf("%s","Tie");
	return 0;
}
	if(a=='S'&&b=='C'||a=='R'&&b=='S'||a=='C'&&b=='R')
	printf("Alice");
	else
	printf("Bob"); 
	return 0;
}