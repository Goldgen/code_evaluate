#include<stdio.h>
int a[100];
int main()
{
	int i=0;
	while(scanf("%d",&a[i++]))
	{
		if(a[i-1]==0) break;
	}
	printf("%d",a[i-2]);
	for(i-=3;i>=0;i--)
	{
		printf(" %d",a[i]);
	}
	return 0;
}