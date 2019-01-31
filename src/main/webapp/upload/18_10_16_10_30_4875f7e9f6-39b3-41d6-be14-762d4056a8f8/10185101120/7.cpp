#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (a<b)
	{
		a=b;
	}
	if (a<d)
	{
		a=d;
	}
	if (a<c)
	{
		printf("%d",c);
	}
	else 
	{
		printf ("%d",a);
	}
	return 0;
}