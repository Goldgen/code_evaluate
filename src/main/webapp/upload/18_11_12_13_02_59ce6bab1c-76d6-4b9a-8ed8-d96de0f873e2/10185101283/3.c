#include<stdio.h>
int a(int x)
{
    unsigned int b,i;
    for(i=2;i<x;++i)
    {
        b=x%i;
        if(b==0)
          break;
    }
        if(i==x)
            return 1;
	 return 0;
}
int main()
{
    unsigned int n;
    scanf("%u",&n);
    if(a(n))
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}