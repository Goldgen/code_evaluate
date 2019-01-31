
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;n;)
	{
		if(n%2)i++,n--;
		n=n/2;
	}
	printf("%d",i);
	return 0;
} 
