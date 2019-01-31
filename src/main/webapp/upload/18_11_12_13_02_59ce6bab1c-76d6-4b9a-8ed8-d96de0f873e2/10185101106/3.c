#include<stdio.h>
#include <math.h>
int judge(int );
int main()
{	
	int n,a,b=1;
	scanf("%d",&n);
	judge(n);
	if(n==1)
	printf("It's not a prime number.");
	else if(b==1)
	printf("It is a prime number.");
	else
	printf("It's not a prime number.");
	return 0;	
}
int judge(int )
{
		int maxcheck = (sqrt(n))+1;
	for(a=2;a<maxcheck;a++)
	{
		if(n%a==0)
		b++;
	}
}