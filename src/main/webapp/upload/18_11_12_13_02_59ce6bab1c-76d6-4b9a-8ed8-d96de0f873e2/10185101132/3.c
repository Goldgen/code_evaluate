#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int n;
    scanf("%d", &n);
    if(isPrime(n))
    {
        printf("It is a prime number.");
    }
    else
    {
        printf("It's not a prime number.");
    }
    return 0;
}

int isPrime(int n)
{
    int i;
    if(n == 1)
        return 0;
	for( i = 2; i < sqrt(n); i++ )
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
