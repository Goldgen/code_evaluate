#include<stdio.h>
#include<string.h>
int main()
{
	int data[500];
	int n=0,a=0,i=0,j=0,k=0,h=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	for(k = n ; k > 0;k--)
	{
		for(j=1;j<n;j++)
		{
			if(data[j]< data[j-1])	
				{
				 a= data[j];
				 data[j] = data[j-1];
				 data[j-1] = a;
				}	
		}
	}
	printf("%d",data[0]);
	for(h=1;h<n;h++)
		printf(" %d",data[h]);
	return 0;
}
