#include<stdio.h>
#include<math.h>

int main()
{
	int A,B,C,D;
	scanf("%d%d%d",&A,&B,&C);
	if(A<B)
	{
		D=B;
	}
	else
	{
		D=A;
	}
	if(D>C)
	{
		printf("%d",D);
	}
	else
	{
		printf("%d",C);
	}
	return 0;
}