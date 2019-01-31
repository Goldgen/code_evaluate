#include <stdio.h>
#include <stdlib.h>

void fun()
{
    long n;
    scanf("%ld",&n);
    if(n>0)
    {
        fun();
        printf("%ld ",n);
    }
}
int main()
{
    long n;
    scanf("%ld",&n);
    if(n>0)
    {
        fun();
        printf("%ld",n);
    }
	return 0;
}
