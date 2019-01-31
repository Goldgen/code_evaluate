#include<stdio.h>

int n,m,flag;

void print(int x)
{
	if (x<65) return ;
	if (x>65+25&&x<97) return ;
	if (x>97+25) return ;
	flag=1;
	if (x<=100) printf("%d      %c\n",x,x);
	else printf("%d     %c\n",x,x);
}

int main()
{
	scanf("%d%d",&n,&m);
	flag=0;
	for (int i=n;i<=m;i++)
		print(i);	
	if (!flag) printf("NONE");
	return 0;
}