#include<stdio.h>
int main()
{
	int num,x1,x2,i;
	scanf("%d",&num);
	printf("%d",num);
	int flag;
	for (x1 = 2 ; x1+x1 <= num ; ++x1)
	{
		flag = 1;
		x2 = num - x1;
		for (i = 2 ; i * i <= x1 ; ++i)
		{
			if(x1 % i == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		for (i = 2 ; i * i <= x2 ; ++i)
		{
			if(x2 % i == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
			printf("=%d+%d",x1,x2);
		}
	}

return 0;
 } 