#include<stdio.h>
#include<math.h>
void fun(int a)
{
	int i;
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			printf("It's not a prime number.");
			return;
		}
	}
	printf("It is a prime number.");
}
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
	return 0;
}