#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	int a[n+1];
	for(;i<=n;i++)
	{
	scanf("%d",&a[i-1]);
	}
	int b,c,j=n;
	scanf("%d %d",&b,&c);
	for(;j>=b+1;j--)
	{
		a[j]=a[j-1];
	}
	a[b]=c;
	for(int k = 0;k<=n;k++)
{
	printf("%d",a[k]);
	if(k!=n)
	printf(" ");
}
	return 0;
 } 