#include<stdio.h>
#include<stdio.h>
int main()
{void x(int) ;
	int a;
	scanf("%d",&a);
	x(a);
	return 0;
}
void x(int a)
{
	int i=2,flag=1;
	for(;i<=sqrt(a);i++)
	{
		if(a%i==0)
		flag=0;
	}
	if(flag==1)
	printf("It is a prime number.");
	else
	printf("It's not a prime number.");
}