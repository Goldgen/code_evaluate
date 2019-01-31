#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	scanf("%d",&a);
	char str[a][30] ;
	char tem[30] ;
	
	getchar();
	for(int i = 0;i < a;i++)
	{
		gets(str[i]);
	}
	
	for(int i = 0;i < a * (a - 1) / 2;i++)
	{
		for(int m = 1;m < a;m++)
	{
		if(strcmp(str[m],str[m-1])>0)
		{
			strcpy(tem,str[m]);
			strcpy(str[m],str[m-1]);
			strcpy(str[m - 1],tem);
		}
	}}
	for(int p = 0;p < a;p++)
	{
		printf("%s",str[p]);
		if(p < a -1)
		printf("\n");
	}
    
}