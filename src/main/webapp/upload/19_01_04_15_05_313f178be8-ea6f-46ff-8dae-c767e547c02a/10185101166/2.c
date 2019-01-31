#include<stdio.h>
#include<math.h>
int main()
{
	int a , b , c , m = 0;
	scanf("%d+%d=%d",&a,&b,&c);
	for(int i = 0;i < 30;i++)
	{
		if(a * pow(10,i) + b == c)
		{
			m = i;
			break;
		}
	}
	

	
		for(int n = 0;n < 30;n++)
	{
		if(b * pow(10,n) + a == c)
		{
			m = -n;
			break;
		}
	}
	
	
	printf("%d",m);
}
