#include<stdio.h>
int dg(int x);
int main()
{
	int a,b;
	scanf ("%d",&a);
	b=dg(a);
	printf ("%d",b);
}
int dg(int x)
{
	int sum=0;
	if (x<10){
		return x;
	}
	sum=x%10+dg(x/10);
	return sum;
}