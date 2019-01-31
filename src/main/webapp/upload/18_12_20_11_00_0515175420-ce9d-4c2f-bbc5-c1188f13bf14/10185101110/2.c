#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	getchar();
	for(int k=0;k<T;k++)
	{
	
	char str[20][20];
	int i=0;
	while(1)
	{ 
	
	char a;
	for(int j=0;j<20;j++)
		{
		scanf("%c",&a);
		if(a==' '||a=='\n')
		break;
		else
		str[i][j]=a;
		}
		if(a=='\n')
		break;
	}
	char b[20];
	for(i=0;i<19;i++)
	{
		if(str[i][0]>'z'||str[i][0]<'A')
			continue;
			if(str[i][0]=='\0')
			break;
		for(int j=i;j<20;j++)
		{
		if(str[j][0]=='\0')
			break;
			if(str[j][0]>'z'||str[j][0]<'A')
			continue;
			
			
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(b,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],b);
				
			}
		}
	}
	printf("case #%d:\n",k);
	for(int w=0;w<20;w++)
	{if(str[w][0]!='\0')
	break;
	if(w!=0&&str[w][0]!='\0')
	printf(" ");
	printf("%s",str[w]);
	
	}
}
}