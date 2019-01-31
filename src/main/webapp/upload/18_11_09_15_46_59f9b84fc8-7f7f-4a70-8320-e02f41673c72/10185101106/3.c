#include <stdio.h>
int main()
{
	int a=64,i,j,k,m,b,c;
	int n;
	scanf("%d",&n);
	n=2*n-1;
	for(i=1;i<=(n+1)/2;i++)
	{
		for(j=1;j<=(n-2*i+1)/2;j++)
		printf(" ");
		for(k=1;k<=2*i-1;k++)
		printf("%c",a+i);
		printf("\n");
		}
	for(m=(n+3)/2;m<=n;m++)
		{
			for(b=1;b<=m-(n+1)/2;b++)
			printf(" ");
			for(c=1;c<=n-2*(m-(n+1)/2);c++)
			printf("%c",a+m);
			if(m!=n)
			printf("\n");
		}
		return 0;
}