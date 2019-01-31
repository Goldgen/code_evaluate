#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=7;
    int a,b;
    printf("6");
    while(n<=100)
    {
        a=(int)n/10;
    	b=(int)n-10*a;
		if((n%3==0)&&(b==6))
            printf(" %d",n);
        n++;
    }
    return 0;
}
