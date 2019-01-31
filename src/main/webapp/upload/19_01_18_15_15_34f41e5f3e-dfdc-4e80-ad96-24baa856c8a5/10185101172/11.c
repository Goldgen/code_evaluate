#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,o,p,q=0;
	printf("153");
    for(n=154;n<1000;n++)
    {
    q=n%10;
    o=n/100;
    p=(n-o*100-q)/10;
    if(q*q*q+p*p*p+o*o*o==n)
        printf(" %d",n);
    }
  
    return 0;
}
