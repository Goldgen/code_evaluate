#include<stdio.h>
#include<string.h>
int main()
{
	int n=0,flag=0,i=0,j=0,k=0; 
	char str[10][31],str2[10][31];
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
		strcpy(str2[i],str[flag]);
		strcpy(str[flag],str[i]);
		strcpy(str[i],str2[i]);
	}
	for(k=0;k<n;k++)
		puts(str[k]);
	return 0;
}
