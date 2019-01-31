#include<stdio.h>
void dg(int x);
int main()
{
	int n;
	scanf ("%d",&n);
	dg(n);
}
void dg(int x)
{
	static int i=0;
	int n;
	if (x>0){
		i++;
		scanf ("%d",&n);
		dg(n);
		--i;
		if (i)
		printf ("%d ",x);
		else
		printf ("%d",x);
	}
}