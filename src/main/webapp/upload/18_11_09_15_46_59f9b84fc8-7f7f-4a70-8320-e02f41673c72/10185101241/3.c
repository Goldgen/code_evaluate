#include<stdio.h>
char F(int y)
{
	char x;
	x=64+y;
	return x;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int y=1;y<=2*n-1;y++)
	{
		if(y<=n)
		{
			for(int a=n-y;a>0;a--) printf(" ");
			for(int b=1;b<=2*y-1;b++) printf("%c",F(y));
			printf("\n");
		}
		if(y>n)
		{
			for(int a=y-n;a>0;a--) printf(" ");
			for(int b=1;b<=2*(2*n-y)-1;b++) printf("%c",F(y));
			if(y!=2*n-1) printf("\n");
		}
	}
	return 0;
}