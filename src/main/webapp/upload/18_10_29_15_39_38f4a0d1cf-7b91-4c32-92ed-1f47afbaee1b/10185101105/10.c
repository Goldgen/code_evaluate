#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,s,b,a[10]={};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
	printf("{}\n");
	for(s=1;s<pow(2,n)-1;s++)
	{
		printf("{");
		for(b=1,i=0;i<n;b=b<<1,i++)
		{
			if(b&s)printf("%d,",a[i]);
		}
		printf("\b}\n");
	}
	printf("{");
		for(b=1,i=0;i<n;b=b<<1,i++)
		{
			if(b&s)printf("%d,",a[i]);
		}
		printf("\b}");
	return 0;
} 