#include<stdio.h>
int GCD(int a,int b)
{
	if(a%b==0) return b;
	else return GCD(b,a%b);
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(y==0) printf("%d",x); 
	else printf("%d",GCD(x,y));
	return 0;
}