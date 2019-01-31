#include<stdio.h>
#include<math.h> 
void Prime(int n)//?????? 
{
	int i=0/*????*/,x=1/*????*/,rem/*????*/;
	double m/*????*/;
	m = sqrt(n) + 0.5;
	for(i=2;i<=m;i++)
	{
		rem = n % i;
		if(rem == 0)
			{
				x=0;
				break;
			}
	}
	(x == 1) ? (printf("It is a prime number.")) : (printf("It's not a prime number.")); 
} 
int main()
{
	int n;
	scanf("%d",&n);
	Prime(n);//???????? 
	return 0;
}