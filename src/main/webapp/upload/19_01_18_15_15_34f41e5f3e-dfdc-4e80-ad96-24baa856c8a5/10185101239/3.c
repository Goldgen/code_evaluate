#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,a,b,c,d;
   scanf("%d",&n);
	printf("%d",n);
   for(a=2;a<=n/2;++a)
    {  b=2;
       while(a%b!=0)
		   ++b;
       if(b>sqrt(a))
       {c=n-a;
        d=2;
        while(c%d!=0)
			++d;
        if(d>sqrt(c)&&n==a+c)
            printf("=%d+%d",a,c);}}

    return 0;
}