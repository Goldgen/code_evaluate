#include<stdio.h>

int main()
{
	int data[100];
	int i;
	scanf("%d",&i);
	for(int m = 0;m < i;m++)
	{
		scanf("%d",&data[m]);
	}
	
	int a , b = 0 ,q = 0;
    int riri[100]; 
	scanf("%d",&a);
	for(int n = 0;n < i;n++)
	{
		
		if(data[n] == a)
		{
			for(int p = 0;p < 1;p++)
			{
				riri[q] = n;
				q++;
			}
			b = 1;
		}
	}
	if(b == 0)
	{
		printf("ERROR");
	}
	else
	{
		for(int u = 0;u < q;u++)
		{
			printf("%d",riri[u]);
			if(u < q -1)
			printf(" ");
		}
	}
}