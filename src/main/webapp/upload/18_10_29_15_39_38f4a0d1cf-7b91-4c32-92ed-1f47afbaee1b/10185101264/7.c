#include<stdio.h>
int main()
{
	int n,i,sum=0,m,t;
	scanf("%d",&n);
	for(i=0;i<32;i++)
	{
		m=n>>i;
		t=m&1;
		if(t==1)
			sum++;
		else
			continue;
	}
	printf("%d",sum);
}
