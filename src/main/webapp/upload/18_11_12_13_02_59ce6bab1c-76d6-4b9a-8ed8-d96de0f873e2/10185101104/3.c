#include <stdio.h>
#include <math.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	if(n==1)
		printf("It's not a prime number.");	
	else
	{
		for(i=2;i<pow(n,0.5);i++)
		{
			if(n%i==0)
			{
				printf("It's not a prime number.");
				return 0;
			}
		}
		printf("It is a prime number.");
	}
	return 0;
}