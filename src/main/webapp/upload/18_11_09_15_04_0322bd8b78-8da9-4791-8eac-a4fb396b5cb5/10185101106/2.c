#include<stdio.h>
#include<ctype.h>
int main()
{
	int n,i,j,k,m;
	scanf("%d",&n);
	for( i=1;i<=n;i++)
	{
		for( j=1;j<=2*n-2*i;j++)
		printf(" ");printf("1");
		for( k=2;k<=i;k++)
		printf("+%d",k);
		printf("=%d",k-1);
		for(m=k-2;m>=1;m--)
		printf("+%d",m);
		if(i!=n)
		printf("\n");
	}
	return 0;
 } 