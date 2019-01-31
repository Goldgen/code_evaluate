#include<stdio.h>
#include<string.h>
int main()
{
	int T = 0, i = 0,j = 0,num = 0;
	char str[10][51];
	scanf("%d",&T);
	getchar();
	for(i = 0;i < T;i ++)
	{
		gets(str[i]);
		for(j = 0;str[i][j] != '\0';j ++)
		{
			num = str[i][j] - 'A' + 1 ;
			num = num % 26;
			str[i][j] =  'A' +num;
		}
	}
	for(i = 0;i < T;i ++)
	{
		printf("case #%d: ",i);
		puts(str[i]);
	}
		return 0;	
}
