#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100],x[100];
	int y[100]={1},y1=0,w;
	gets(arr);
	for(int i=0;i<=strlen(arr);i++)
	{
		if(arr[i]==' ')
		continue;
		for(int j=0;j<=strlen(x);j++)
		{
			if(arr[i]==x[j])
			{
				y[j]++;
				j=0;
			
			break;}
			if(j==strlen(x))
			{
				x[y1]=arr[i];
				y[y1]=1;
				y1++;
				break;
			}
		}
		
	}
	

	for(int i=0;i<strlen(x);i++)
	{
		printf("%c %d; ",x[i],y[i]);
	}
return 0;
  }