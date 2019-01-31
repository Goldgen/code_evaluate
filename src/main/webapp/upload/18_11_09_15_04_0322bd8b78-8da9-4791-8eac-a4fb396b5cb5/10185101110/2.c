#include<stdio.h>
int main()
{
	int num,i,j,k;//i为第几排 
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{for(k=1;k<=(2*num-2*i);k++)
		{printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		
		if(j<i)
			printf("%d+",j);
			else
			printf("%d=",j);
		}
		for(j=i;j>0;j--)
		{if(num==i&&j==1)
			printf("1");
			else if(j>1)
			printf("%d+",j);
			else
			printf("%d\n",j);
		}
	}
	return 0;
 } 