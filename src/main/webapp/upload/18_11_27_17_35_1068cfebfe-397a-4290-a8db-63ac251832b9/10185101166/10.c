#include<stdio.h>

int main()
{
	int a , data[20];
	scanf("%d",&a);
	for(int i = 0;i < a;i++)
	{
		scanf("%d",&data[i]);
	}
	for(int p = 0;p < a * (a - 1) / 2;p++)
	{
		for(int m = 1,n = 0;m < a;m++)
	{
		if(data[m] < data[m-1])
		{
			n = data[m];
			data[m] = data[m-1];
			data[m-1] = n;
		}
	}
	}
	for(int u = 0;u < a;u++)
	{
		printf("%d",data[u]);
		if(u < a - 1)
		printf(" ");
	}
}