#include<stdio.h>
int main()
{
	int n,j,a,b,s=0;
	scanf("%d",&n);
	for(j=0;j<32;j++)
	{
		a=n>>j;
		b=a&1;
		if(t==1)
			s++;
		else
			continue;
	}
	printf("%d",s);
}