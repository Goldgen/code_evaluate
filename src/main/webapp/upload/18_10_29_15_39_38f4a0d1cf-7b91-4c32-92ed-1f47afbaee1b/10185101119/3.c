#include <stdio.h>
int main()
{
	int n,a,b;
	int odd1=0,odd2=0;
	scanf("%d",&n);
	printf("%d",n); 
	for(int i=3;i<=n/2;i+=2)
	{
		for(int j=2;j<(i+1)/2;j++)
		{
			if(i%j==0)
			odd1++;
		}
		if(odd1==0)
		{		
		    a=i;
		    b=n-i;
		    for(int k=2;k<(b+1)/2;k++)
		    {
		    	if(b%k==0)
		    	odd2++;
			}
			if(odd1==0&&odd2==0)
		    printf("=%d+%d",a,b);
		}
		odd1=0;
		odd2=0;
	}
	return 0;
}