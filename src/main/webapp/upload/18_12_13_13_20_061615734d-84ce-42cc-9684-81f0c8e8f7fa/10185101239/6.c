#include <stdio.h>
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	int a[m];
	for(int i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=m-n;i<m;i++)
		printf("%d ",a[i]);
	for(i=0;i<m-n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[m-n-1]);
	return 0;
}