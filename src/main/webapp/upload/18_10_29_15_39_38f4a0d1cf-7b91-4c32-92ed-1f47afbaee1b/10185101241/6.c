#include<stdio.h>

int main()
{
	int x,y,z,max;
	scanf("%d %d",&x,&y);
	for(z=1;z<=x;z++)
	{
		if(x%z==0)
		{
			if(y%z==0)
			{
				max=z;
			}
		}
	}
	printf("最大公约数是: %d",max);
	return 0;
 } 