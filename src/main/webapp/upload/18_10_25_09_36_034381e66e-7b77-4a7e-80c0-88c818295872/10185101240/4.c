#include<stdio.h>
int main()
{
	int j,i,line;
	scanf("%d",&line);
	for(j=1;j<line;j++)//第一行处理 ，此时i应该等于1，为了简化没有进行赋值 
	{
		printf("*");
	}
	printf("*\n");
	for(i=2;i<line;i++)//来到第二行 ,在line-1行输出完后结束 
	{  
	   printf("*");
	   for(j=2;j<line;j++)
	   {
		   printf(" ");
	   }
	printf("*\n");
	}
	for(j=1;j<=line;j++)//在最后做特殊处理 
	{
		printf("*");
	}
}