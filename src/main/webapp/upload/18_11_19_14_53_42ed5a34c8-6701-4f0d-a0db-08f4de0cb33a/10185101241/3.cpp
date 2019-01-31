#include<stdio.h>

int main()
{
    int n=0,a[50],x;
	scanf("%d",&x);
	while(x>0)
	{
		a[++n]=x;
		scanf("%d",&x);
	}
	for (x=n;x>1;x--)
		printf("%d ",a[x]);
	if (x>=1) printf("%d",a[1]);
	return 0;
}