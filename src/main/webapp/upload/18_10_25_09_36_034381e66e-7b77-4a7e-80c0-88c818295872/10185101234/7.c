#include<stdio.h>
int main()
{
 	int n=0;
        int m=0; 
 	int i=1;
 	int j=1;
 	scanf("%d",&n);
 	m=(n+1)/2;
 	for(i=1;i<=m;i++)
	{   
	    if(i==1)
	    {
	     for(j=1;j<=m;j++)
	     {
	     	if(j==m)
	     	printf("*");
	     	else
	     	printf(" ");
	     }
	     printf("\n");
	}	
	else if(i==m)
		{
			for(j=1;j<=n;j++)
			printf("*");
		}
		else
		{
			for(j=1;j<=m+i-1;j++)
			{
				if(j==m-i+1||j==m+i-1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}	
 	}
	return 0;
} 
