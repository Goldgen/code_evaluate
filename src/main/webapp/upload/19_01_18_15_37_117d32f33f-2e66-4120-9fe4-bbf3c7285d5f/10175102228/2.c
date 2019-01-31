#include<stdio.h>
#include<stdlib.h>
unsigned long long int getbits( unsigned long long int x, unsigned int p, unsigned int n)
{return (x >>(p + 1 -n))&~(~0 << n);
}
int main()
{ unsigned long long int x;
 unsigned int p,n;
 scanf("%lu%u%u",&x,&p,&n);
 printf("%llu",getbits(x,p,n));

  return  0;
}
