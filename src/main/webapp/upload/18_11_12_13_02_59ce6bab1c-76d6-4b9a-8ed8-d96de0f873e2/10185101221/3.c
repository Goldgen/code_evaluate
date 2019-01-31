#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fupri(int num)
{
	if(num==2)
		printf("It is a prime number.");
	else if(num%2 == 0)
		printf("It's not a prime number.");
	else{
    for(int i = 3;i<=sqrt(num);i=i+2)
    {
        if(num%i == 0)
		{
			printf("It's not a prime number.");
            return ;
		}

    }
	printf("It is a prime number.");
	}
    return ;
}

int main()
{
    int n = 0;
    scanf("%d",&n);
    fupri(n);
    return 0;
}
