#include<stdio.h>
int main()
{
	char msg[85] ,cpy[85];
	
	gets(msg);
	int m;
	m = sizeof(msg) / sizeof(msg[0]);
	
	int a;
	scanf("%d",&a);
	
	for(int i = 0;i < m - a;i++)
	{
		cpy[i] = msg[i + a];
	}
	
	printf("%s",cpy);
}