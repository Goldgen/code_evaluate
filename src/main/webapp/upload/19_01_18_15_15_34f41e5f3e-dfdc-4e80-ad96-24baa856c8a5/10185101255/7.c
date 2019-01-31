#include<stdio.h>

int main()
{
	int n,s=0;
	scanf("%d",&n);
	while(n)
	{
		if(n%2) s++;
		n/=2;
	}
	printf("%d",s);
	return 0;
}
