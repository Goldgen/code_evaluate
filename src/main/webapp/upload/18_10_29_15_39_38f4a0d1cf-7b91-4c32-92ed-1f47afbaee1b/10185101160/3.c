#include <stdio.h>
#include <math.h>
	int n=0,a=0,b=0;
	int i=0,j=0;
	int x=1,y=1; 
void aprime()//a是否为质数 
{
	for(i=2;i<=(int)(sqrt(a) + 0.5);i++)
	{
		if(a%i==0)
		{
			x=0;
			break;
		}
		else
			x=1;	
	}
}
void bprime()//b是否为质数 
{
	for(j=2;j<=(int)(sqrt(b) + 0.5);j++)
	{
		if(b%j==0)
		{
			y=0;
			break;
		}		
		else
			y=1;				
	}		
}
int main()
{
	scanf("%d",&n);
	printf("%d",n);
	for(a=2;a<=n/2;a++)
	{
		aprime();
		if(x==1)//a为质数 
		{
			b=n-a;
			bprime();
			if(y==1)//b是质数 
				printf("=%d+%d",a,b);
		}
	} 
	return 0;	
}