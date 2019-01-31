#include <stdio.h>
int main()
{
    int a,b;
    b=0;
	for(a=6;a<=100;a+=10)
    {
    	if(a%3==0&&b!=0)
    	{
    	    printf(" %d",a);
    	    b++;
    	}
    	if(a%3==0&&b==0)
    	{
    	    printf("%d",a);
    	    b++;
    	}
    }
	return 0;
}


