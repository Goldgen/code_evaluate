#include<stdio.h>
	int n,m; 
 	int i=0,j=0;
void iso1()
{
	for(j=0;j<m;j++)
		{
	     	if(j==m-1)
	     		printf("*");
	   		else
	   			printf(" ");
		}
			printf("\n");
}
void iso2()
{
	for(j=0;j<n;j++)
		printf("*");
}
void iso3()
{
	for(j=0;j<=m-1+i;j++)
	{
		if(j==m-1-i||j==m-1+i)
			printf("*");
		else
			printf(" ");
	}
	printf("\n");
}
int main()
{
	scanf("%d",&n);
 	m=(n+1)/2;
 	for(i=0;i<m;i++)
	{   
	    if(i==0)
	    {	iso1();	}	
		else if(i==m-1)
		{	iso2();	}
		else
		{	iso3();	}	
 	}
	return 0;
} 