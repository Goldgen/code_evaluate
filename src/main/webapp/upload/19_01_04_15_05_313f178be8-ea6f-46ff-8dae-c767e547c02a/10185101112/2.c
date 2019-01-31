#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long long a,b,c;
	scanf("%lld+%lld=%lld",&a,&b,&c);	
	for(int i=0;i<10;i++)
	{
		double p=i;
	    if(c==pow(10.0,p)*a+b)
	    {
	    	printf("%d",i);
	    	return 0;
		}
		
	}
	for(int i=0;i<11;i++)
	{
		double p=i;
		if(c==a+pow(10.0,p)*b)
			printf("%d",-i);	
	}

	
    return 0;
}
