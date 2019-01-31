#include<stdio.h>
void dg (int x);
int main()
{
	int n;
	scanf ("%d",&n);
	dg (n);
}
void dg (int x)
{
	if (x<2){
		printf ("%d",x);
	}
	else{
		dg(x/2);
		printf ("%d",x%2);
	}
}