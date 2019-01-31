#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	int a[n];
	for(;i<=n;i++)
	{
	scanf("%d",&a[i-1]);
	}
	int b,j,c=0;
	scanf("%d",&b);
	for(i=1;i<=n;i++)
	{
		if(a[i-1]==b)
		{j=i-1;
		break;}
		else
		c++;
	}
	for(;j<=n-2;j++)
	{
		a[j]=a[j+1];
	}
if(c<n)
{

	for(int k = 0;k<=n-2;k++)
{
	printf("%d",a[k]);
	if(k!=n-2)
	printf(" ");
}
}
else
printf("ERROR");
	return 0;
 } 