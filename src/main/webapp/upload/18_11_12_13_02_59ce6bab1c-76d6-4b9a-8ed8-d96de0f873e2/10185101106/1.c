#include<stdio.h>

int n;
void times(int a,int b){

	if(a*b >= 10)
	printf(" %d * %d = %d",b,a,a*b);
	else
	printf(" %d * %d =  %d",b,a,a*b);
} ;
int main()
{	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			times(i,j);
		}
		
		if(i != n)
		printf("\n");}
	return 0;
}