#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int m,t,i;
	char num[30];
	scanf("%s %d",num,&m);
	t=strlen(num);
	printf("%d ",t);
	m=m%t;
	for(i=1;i<=(t-m);i++)
        num[t-1+i]=num[i-1];
    for(i=0;i<t;i++)
    	printf("%c",num[t-m+i]);
}