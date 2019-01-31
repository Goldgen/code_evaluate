#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	scanf("%d",&x);//input number from 1 to 99
	int y=x%10;
	int z=(x-y)/10;
	printf("%d %d",y,z);
	return 0; 
}