#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ** Input(int n)
{
	char **a=(char**)malloc(sizeof(char*)*n);//给指针数组分配足够的空间
	char str[31];//储存字符串
	for (int i=0;i<n;i++)
	{
		gets(str);
		a[i]=(char*)malloc(sizeof(char)*31);//分配足够的空间
		strcpy(a[i],str);//把内容存到指针指向的内容中
	}
	return a;
}
void Free(char**a, int n)
{
	for(int i=0;i<n;i++)
	{
		free(a[i]);
	}
	free(a);
	return;
}
void Sort(char** a, int n)
{
	int min;
	char t[31];
	for (int i=0;i<n-1;i++)
	{
		min=i;
		for (int j=i+1;j<n;j++)
		{
			if (strcmp(a[j],a[min])<0)
				min=j;
		}
		if (min!=i)
		{
			strcpy(t,a[min]);
			strcpy(a[min],a[i]);
			strcpy(a[i],t);
		}
	}
	return;
}
int main(void)
{
	char** p;
	int n;
	scanf("%d",&n);
	getchar();
	p=Input(n);
	Sort(p,n);
	for(int i=0;i<n;i++)
       printf("%s\n",p[i]);
    Free(p,n);
    return 0;
}
