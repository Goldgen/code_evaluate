#include<stdio.h>

int fibonacci(int);

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}

int fibonacci(int nth)
{
    if(nth==0)
		return 0;
	else if(nth==1||nth==2)
        return 1;
    else
        return fibonacci(nth-1)+fibonacci(nth-2);
}
