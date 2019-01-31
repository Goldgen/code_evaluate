#include <stdio.h>
#include <stdlib.h>

long int fibonacci(int n);
int main(void)
{
    int num;
    scanf("%d",&num);
    printf("%ld",fibonacci(num));
    return 0;
}

long int fibonacci(int n){
	if(n==0) return 0;
    if(n==1||n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
