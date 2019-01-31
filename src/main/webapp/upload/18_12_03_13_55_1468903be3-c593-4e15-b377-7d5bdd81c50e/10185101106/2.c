#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char ch[n+1][1000];
	int i=0;
	for(;i<=n;i++)
	{
		gets(ch[i]);
	}
	char hc[1000];
	for(i=0;i<n;i++)
	{
		for(int j=i;j<=n-1;j++)
		{
			if(strcmp(ch[j],ch[j+1])>0)
			{
				strcpy(hc,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],hc);
			}
		}
	}
	for(i=n;i>0;i--)
	{
		puts(ch[i]);
	}
	
}