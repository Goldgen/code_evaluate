#include<stdio.h>
#include<string.h>
int main()
{
	char arr[80],brr[80];
	int flag=0,times=0,first=0,firstt=0;
	gets(arr);
	gets(brr);
	for(int i=0;i<strlen(arr);i++)
	{
		if(arr[i]==brr[0])
		{
			flag=1;times++;
			if(firstt==0)
			first=i;
			firstt=1;
			for(int j=0;j<strlen(brr);j++)
			{
				if(arr[i+j]!=brr[j])
				{
				flag=0;times--;break;}
			}
		}
	}
	printf("%s: %d time(s), first at %d",brr,times,first);
	return 0;
	
	

 } 