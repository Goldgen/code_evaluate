#include <stdio.h>
int main()
{
	int n,a[10][10]={0};
	scanf("%d",&n);
    for(int i=0;i+1<=n;i++)
    {
    	a[i][0]=1;
    	printf("%d",a[i][0]);
    	for(int j=1;j<=i;j++)
    	{
    		a[i][j]=a[i-1][j-1]+a[i-1][j];
    		printf(" %d",a[i][j]);
		}
		if(i+1!=n)
		printf("\n");
	}
	return 0;
} 