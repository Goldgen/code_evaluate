#include<stdio.h>
int main()
{
	int a,c=0;
	scanf ("%d",&a);
	for (;a;a/=2)
	{
		if (a%2==1)
		{
			c+=1;
		}
	}
	printf ("%d",c);
}