#include <stdio.h>
int main()
{
    int n,i,a,b,c;
	printf("153");
    for(n=154;n<=999;n++)
        {
            a=n/100;
            b=(n-a*100)/10;
            c=n%10;
            if(n==a*a*a+b*b*b+c*c*c)
                printf(" %d",n);
         }
    return 0;
}
