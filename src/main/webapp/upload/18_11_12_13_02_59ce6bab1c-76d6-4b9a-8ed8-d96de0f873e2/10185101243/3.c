#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    if(n==1)
    {
	printf("It is a prime number.");}
	else if(n==2)
    {
	printf("It is a prime number.");}
    else{
    	for(i=2;i<=n-1;i++)
    	{
    		if(n%i==0)
    		{
			printf("It's not a prime number.");
			return 0;}
		}
		printf("It is a prime number.");
	}
    return 0;
}