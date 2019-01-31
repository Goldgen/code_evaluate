#include <stdio.h>
#include <math.h>
int isprime(int a)
{
    if(a == 1)
        return 0;
    else if(a == 2)
        return 1;
    int i = 2;
    int j = sqrt(a);
    for(; i <= j; i++)
    {
        if(a % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
	int a;
	scanf("%d", &a);
	if(isprime(a))
		printf("It is a prime number.");
	else
		printf("It's not a prime number.");
}
