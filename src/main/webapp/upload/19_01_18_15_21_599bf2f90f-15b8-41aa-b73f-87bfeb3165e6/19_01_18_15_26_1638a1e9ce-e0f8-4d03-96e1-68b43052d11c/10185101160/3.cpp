#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int x,p,n,i,j,y,z;
	scanf("%u%u%u",&x,&p,&n);
	y=x;
	for(i=p-n+1;i<p+1;i++)
	{   
	    y=x>>i;
		j=y&1;
		z=1<<i;
        if(j==1)
			x-=z;
		else
		    x+=z;	
	}
	printf("%u",x);
	return 0;
}