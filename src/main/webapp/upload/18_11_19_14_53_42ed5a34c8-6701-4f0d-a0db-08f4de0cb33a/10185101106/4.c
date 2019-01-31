#include<stdio.h>

void fun(int n)
{	
	int a;
	a = n;
	if(n > 0)
	{n/=2;
	fun(n);
	printf("%d",a&1);
}
	
};
int main()
{	int n;
	scanf("%d",&n);
	fun(n);
	return 0;
}