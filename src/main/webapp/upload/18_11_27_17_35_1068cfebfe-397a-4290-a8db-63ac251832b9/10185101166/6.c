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
	
	int a , b = 0;
	scanf("%d",&a);
	int riri[i-1];
	for(int n = 0;n < i;n++)
	{
		if(data[n] == a)
		{
			for(int p = 0;p < n;p++)
			{
				riri[p] = data[p];
			}
			for(int q = n;q < i - 1;q++)
			{
				riri[q] = data[q + 1];
			}
			b = 1;
			break;
		}
	}
	if(b == 0)
	{
		printf("ERROR");
	}
	if(b == 1)
	{
		for(int w = 0;w <= i - 2;w++)
	    {
		        printf("%d",riri[w]);
		        if(w < i-2)
		        printf(" ");
	    }
	}
}
