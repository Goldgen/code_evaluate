#include<stdio.h>
int main()
{
 	int n; 
 	int i=0,j=0;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
	{   
	    if(i==0)
	    	printf("*\n");
		else if(i==n-1)
		{
			for(j=0;j<n;j++)
			printf("*");
		}
		else
		{
			for(j=0;j<=i;j++)
			{
				if(j==0||j==i)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}	
 	}
	return 0;
} 