#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int x,p,n,y,i,j,z;
	unsigned int k=0;
	scanf("%u%u%u",&x,&p,&n);
	k=0;
	for(i=p-n+1;i<p+1;i++)
	{   
	    y=x>>i;
		j=y&1;
		z=1<<(i-p-1+n);
        if(j==1)
			k+=z;	
	}
	printf("%u",k);
	return 0;
}