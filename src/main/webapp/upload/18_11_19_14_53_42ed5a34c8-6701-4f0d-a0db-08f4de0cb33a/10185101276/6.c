#include <stdio.h>
int fibonacci(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    if(n==0)return 0;
	else if(n==1||n==2)return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
