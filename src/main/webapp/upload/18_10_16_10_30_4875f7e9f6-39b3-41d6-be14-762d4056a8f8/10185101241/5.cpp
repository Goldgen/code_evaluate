#include<stdio.h>

int x,n;

int main()
{
	char y;n=0;
	scanf("%d",&x),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d",&x),n+=x;
	printf("%d\n",n);
	n=0;
	scanf("%d%c",&x,&y),n+=x;
	scanf("%d%c",&x,&y),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d%c",&x,&y),n+=x;
	scanf("%d%c",&x,&y),n+=x;
	scanf("%d",&x),n+=x;
	scanf("%d%c",&x,&y),n+=x;
	scanf("%d",&x),n+=x;
	printf("%d",n);
	return 0;
}