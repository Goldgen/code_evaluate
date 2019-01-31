#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char* p;
	int i=0;
	p=(char*)malloc(sizeof(char)*100);
	void order(char* p,int i);
	order(p,i);
	return 0;
}
void order(char* p,int i)
{
	int x=0;
	void order(char* p,int i);
	for(;x<1;x++)
	{
	*(p+i)=getchar();
	if(*(p+i)!='?')order(p,++i);
	else break;
	printf("%c",*(p+i-1));
	}
}