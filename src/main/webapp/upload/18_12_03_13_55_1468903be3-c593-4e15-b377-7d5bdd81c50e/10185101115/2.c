#include<stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	char str[11][31];
    for(int i=0;i<n+1;i++)
    {
    	gets(str[i]);
	}
	int r=0;
	char arr[30];
	for(int i=0;i<n;i++)
	{
		for(int i=0;i<n;i++)
		{
			r=strcmp(str[i],str[i+1]);
			if(r<=0)
			{
				strcpy(arr,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],arr);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			printf("%s",str[i]);
		}
		else
		{
			printf("%s\n",str[i]);
		}
		
	}
} 