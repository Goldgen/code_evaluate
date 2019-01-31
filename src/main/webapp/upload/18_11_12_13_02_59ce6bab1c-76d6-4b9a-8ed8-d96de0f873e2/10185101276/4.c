#include <stdio.h>
#include <stdlib.h>
int a();
int main()
{
     unsigned long long int b;
	 unsigned long long int d;
	 scanf("%lld",&b);
     d=a(b);
     printf("%lld",d);
     return 0;
}
int a(unsigned long long int b)
{
    unsigned long long int c;
    unsigned long long int i=1;
    unsigned long long int sum=0;
    while(b>=1)
    {
        c=b%10;
        b=b/10;
        sum+=c*i;
        i*=8;
    }
    return sum;
}
