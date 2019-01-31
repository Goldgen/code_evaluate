#include<stdio.h>

int main()
{
	int A,B,C,D,E,F;
	scanf("%d%d%d%d",&A,&B,&C,&D);
	if(A<B)
	{
		E=B;
	}
	else
	{
		E=A;
	}
	if(D>C)
	{
		F=D;
	}
	else
	{
		F=C;
	}
	if(E>F)
	{
		printf("%d",E);
	}
	else
	{
		printf("%d",F);
	}
	return 0;
}