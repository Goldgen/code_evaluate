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
	int b,j[10],c=0;
	scanf("%d",&b);
	for(i=1;i<=n;i++)
	{
		if(a[i-1]==b)
		{
		j[c] = i-1;
		c++;
	}
	}

if(c>0)
{

	for(int k = 0;k<=c-1;k++)
{
	printf("%d",j[k]);
	if(k!=c-1)
	printf(" ");
}
}
else
printf("ERROR");
	return 0;
 } 