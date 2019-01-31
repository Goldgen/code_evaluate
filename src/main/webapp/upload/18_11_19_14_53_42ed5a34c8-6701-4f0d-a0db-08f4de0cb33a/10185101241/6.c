#include<stdio.h>
int fibonacci(int n)
{
	int a=1;
	if(n==1) return a;
	else if(n==2) return a;
	else
	{ 
		return fibonacci(n-1)+fibonacci(n-2);
	}
}

int main()
{
	int x;
	scanf("%d",&x); 
	if(x==0) return 0;
	else printf("%d",fibonacci(x));
	return 0;
}