#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if(n==1||n==2)
        return 1;
	else if(n==0)
		return 0;
    else
        return fibonacci(n-1)+fibonacci(n-2);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}