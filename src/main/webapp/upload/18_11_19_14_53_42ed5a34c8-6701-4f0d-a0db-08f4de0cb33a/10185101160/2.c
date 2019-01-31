#include <stdio.h>
int RunningSum(int x)
{
	int sum = 0;
	if(x/10 == 0)//终止条件
		sum = x; 
	else 
	sum = x%10 + RunningSum(x/10);//递归
	return sum;		
}
int main()
{	
	int a=0,s=0;
	scanf("%d",&a);
	s=RunningSum(a);
	printf("%d",s);
	return 0;
}