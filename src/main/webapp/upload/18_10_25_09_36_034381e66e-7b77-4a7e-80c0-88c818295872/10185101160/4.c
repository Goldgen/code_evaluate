#include<stdio.h>
#include<string.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 for(j=0;j<n;j++)
 {
	if(j==0)
	{
	    for(i=0;i<n;i++)
             {printf("*");}
        printf("\n");
	}
	else if(j>0&&j<n-1)
	{
		for(i=0;i<n;i++)
		{
			if(i==0||i==n-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	else
	{
	    for(i=0;i<n;i++)
             {printf("*");}
	}
	 
 }
}