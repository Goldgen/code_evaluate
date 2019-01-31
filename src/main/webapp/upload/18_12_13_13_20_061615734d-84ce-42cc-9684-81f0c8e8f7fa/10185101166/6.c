#include<stdio.h>
#include<string.h>
int main()
{
	int n , m;
	scanf("%d %d",&n,&m);
	int  data[30];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&data[i]);
	}
	
	int p = 0;
	
	for(int i = 1;i <= m;i++)
	{
		p = data[n-1];
		for(int r = n - 1;r >0 ;r--)
		{
			data[r] = data[r - 1];
		}
		data[0] = p;
	}
	
	for(int q = 0;q < n;q++)
	{
		printf("%d",data[q]);
		if(q < n - 1)
		printf(" ");
	}
}
