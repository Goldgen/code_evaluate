#include<stdio.h>

int main()
{
    int N,i;
	unsigned long long n=1;

    scanf("%d",&N);
    for(i = 1;i <= N;i++)
        n *= i;
    printf("%llu",n);
    return 0;
}