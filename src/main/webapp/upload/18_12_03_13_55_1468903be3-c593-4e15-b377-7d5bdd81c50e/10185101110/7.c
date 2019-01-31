#include<stdio.h>
#include<string.h>
int main()
{
	char arr[86]={'\0'};
	int tou=0,flag=0,itou=0;
	float len=0,max=0;
	gets(arr);
	for(int i=0;i<80;i++)
	{
	if(arr[i]!=' '&&arr[i]!='\0')
	{
		
		len++;
		if(flag==0)
		tou=i;
		flag=1;	
	}
	if(arr[i]==' '||arr[i]=='\0')
	{
		if(max<len)
		{
			
		max=len;
		itou=tou;}
		flag=0;
		len=0;
		
	}
	if(arr[i]=='\0')
	break;
	}
	for(int i=itou;i<max+itou;i++)
	printf("%c",arr[i]);
	printf("\n");
	return 0;
	
		

 } 