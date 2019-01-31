#include<stdio.h>
int print(int n)
{
	if(n>0)
    {
		print(n/2);
		printf("%d",n%2);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
