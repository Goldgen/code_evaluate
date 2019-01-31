#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],m;
	
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		
	}

for(int i=0;i<n-1;i++)
{
	for(int j=0;j<n-1-i;j++)
	{if(a[j]>a[j+1])
	{
	m=a[j+1];
	a[j+1]=a[j];
	a[j]=m;
	}}
}
	for(int i=0;i<=n-1;i++)
	{
		printf("%d",a[i]);
		if(i!=n-1)
		printf(" ");
	}
	return 0;
}