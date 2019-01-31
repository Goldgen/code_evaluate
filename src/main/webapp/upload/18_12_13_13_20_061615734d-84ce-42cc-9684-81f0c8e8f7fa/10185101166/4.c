#include<stdio.h>
#include<string.h>
int main()
{
	int T = 0, i = 0,j = 0;
	char str[10][60];
	scanf("%d",&T);
	getchar();
	for(i = 0;i < T;i ++)
	{
		gets(str[i]);
		for(j = 0;str[i][j] != '\0';j ++)
		{
			str[i][j] = (str[i][j] - 'A' + 1) % 26 + 'A';
		}
	}
	for(i = 0;i < T;i ++)
	{
		printf("case #%d: ",i);
		printf("%s",str[i]);
		if(i < T - 1)
		printf("\n");
	}
}