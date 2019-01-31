#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000][2000],b[1000][1000],c[1000],x,cs=0;
	for(int i=0;i<100;i++)
	{
		scanf("%s",&c);
		if(c[0]=='#')
		{
		x=i;
		break;}
		strcpy(a[i],c);
		scanf("%s",b[i]);
		
	}
	for(int i=0;i<x;i++)
	{
		if(a[i][0]=='\0')
		break;
		for(int j=0;j<1000;j++)
		{
			if(a[i][j]==b[i][0])
			{
				for(int k=0;k<strlen(b[i]);k++)
				{
					if(a[i][j+k]!=b[i][k])
					break;
					if(k==strlen(b[i])-1)
					{
					cs++;
					j+=strlen(b[i])-1;
					}
				}
			}
		}
		printf("%d",cs);
		cs=0;
		if(i<x-1)
		printf("\n");
	}
	return 0;
	
  }