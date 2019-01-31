#include<stdio.h>
int main()
{
	int n,N,S=1,t=20181111;
	scanf("%d",&N);
	
	for(n=1;n<=N;n++)
	{
		S*=n;
		S=S%t;
	}
	printf("%d",S);
	return 0;
}