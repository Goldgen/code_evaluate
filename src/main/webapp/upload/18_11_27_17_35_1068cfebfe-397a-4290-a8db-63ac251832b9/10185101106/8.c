#include<stdio.h>
int main()
{
	int n,max=0;
	scanf("%d",&n);
	int data[n];
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&data[i-1]);
	}
	int a = 1;
	for(int i=0;i<=n-2;i++)
	{
		if(data[i]==data[i+1])
		{
			a++;
		}
		else
		{
			if(max<a)
				max=a;
			a=1;
		}
	}
	if(max<a)
		max=a;
	printf("%d",max);
	return 0;
 } 