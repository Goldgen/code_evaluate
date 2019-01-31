#include<stdio.h>
int main()
{
	int i;
	int a[100];
	scanf("%d",&i);
	for(int m = 0;m <= i - 1;m++)
	{
		scanf("%d",&a[m]);
	}
	
	int n , k;
	scanf("%d %d",&n,&k);
	int b[i+1];
	b[n] = k;
	for(int p = 0;p <= i - 1;p++)
	{
		if(p < n)
		{
			b[p] = a[p];
		}
		else
		{
			b[p+1] = a[p];
		}
		
	}
	
	for(int u = 0;u <= i;u++)
	{
		printf("%d",b[u]);
		if(u < i)
		{
			printf(" ");
		}
	}
}