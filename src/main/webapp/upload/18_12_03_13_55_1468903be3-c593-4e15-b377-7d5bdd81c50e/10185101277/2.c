#include<stdio.h>
#include<string.h>
#define SIZE 31


int i,j;
int main()
{
	int n=0,flag=0,k=0; 
	char str[10][SIZE],temp[10][SIZE];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
		gets(str[i]);
	for(i=0;i<n;i++)
	{
		flag = i;
		for(j=i;j<n;j++)
		{
			if(strcmp(str[flag],str[j])<0)
				flag = j;
		}
		strcpy(temp[i],str[flag]);
		strcpy(str[flag],str[i]);
		strcpy(str[i],temp[i]);
	}
	for(k=0;k<n;k++)
		puts(str[k]);
	return 0;
}
