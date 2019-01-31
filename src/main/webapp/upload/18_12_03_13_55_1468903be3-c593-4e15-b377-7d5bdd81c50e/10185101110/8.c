#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100]={'\0'},brr[100]={'\0'};
	int flag,j=0;
	gets(arr);
	for(int i=strlen(arr)-1;i>=0;i--)
	{
		if(arr[i]!='\0')
		flag=1;
		if(flag==1)
		{
			brr[j]=arr[i];
			j++;
		}
	}
	if(strcmp(arr,brr)==0)
	printf("True");
	else
	printf("False");
	

 } 