#include<stdio.h>
#include<string.h>
int main()
{
	int data[100];
	int n=0,a=0,b=-1,i=0,j=0,k=0,x=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	scanf("%d",&a);
	for(j=0;j<n;j++)
		{
			if(data[j] == a)	
				{
					x=1;
					b=j;
					break;
				}	
		}
	if(x == 0)
		printf("ERROR");
	else
	{
		if(b == 0)
		{
			printf("%d",data[1]);
			for(k = 2; k < n; k ++)
				printf(" %d",data[k]);
		}
		else
		{
			printf("%d",data[0]);
			for(k = 1; k < b; k ++)
				printf(" %d",data[k]);
			for(k = b + 1; k < n; k ++)
				printf(" %d",data[k]);
		}
	}
	return 0;
}
