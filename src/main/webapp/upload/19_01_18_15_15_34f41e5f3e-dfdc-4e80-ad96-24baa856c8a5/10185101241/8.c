#include<stdio.h>
#include<math.h>

int main()
{
	int n,m,i,a=0,j,b,c=0;
	scanf("%d%d",&n,&m);
	for(i=0;pow(10,i)<=n;i++)
	{
		if(pow(10,i)<=n) a=a+1;
	}
	while(m>a)
	{
		m=m-a;
	}
	for(j=1;j<=m;j++)
	{
		b=n%10;
		if(b==0) 
		{
			n=n/10;
			c=c+1;
		}
		else
		{
			n=((n-b)/10)+b*(pow(10,a-1+c));
		}
	}
	printf("%d %d",a,n);
	return 0;
}  