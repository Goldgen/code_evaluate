#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if(m<n)
		printf("%d",n);
	else
		printf("%d",m);
	
	return 0;
}