#include<stdio.h>
int x(int);
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",x(a));
	
	return 0;
	
	
 } 
int x(int a)
 {
 	
 	if(a>0)
 	return x(a/10)+a%10;
 	else 
 	return 0;
}