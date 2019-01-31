

#include<stdio.h>
#include<string.h>
int main()
{
	char n[20]={};
	int m,i,j;
	scanf("%s %d",n,&m);
	i=strlen(n);
	printf("%d ",i);
	for(;m>i;)
	{
		m=m-i;
	}
	for(j=i-m;j<i;j++)
	{
		printf("%c",n[j]);
	}
	for(j=0;j<i-m;j++)
	{
		printf("%c",n[j]);
	}
	return 0;
}
