#include <stdio.h>
#include <math.h>
int main()
{
    unsigned int n=0;
    int a=0,i=32;
    long long b;
    scanf("%u",&n);
    for(;i>=0;i--)
    {
    	b=n-pow(2,i);
    	if(b<0)
	  	continue;
    	else
    	{
    		if(b==0)
    		{
    			a++;
    			break;
			}
			else
			{
			    a++;
			    n=b;
			}
			
		}
	}
	printf("%d",a);
	return 0;
}