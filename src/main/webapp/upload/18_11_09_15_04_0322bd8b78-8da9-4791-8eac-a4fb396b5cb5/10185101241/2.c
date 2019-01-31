#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	if(a==1) printf("1=1");
	else
	{
		for(b=1;b<=a;b++)
		{
			for(c=a-b;c>0;c--) printf("  ");
			for(d=1;d<b;d++)
			{	
				printf("%d+",d);
			}
			printf("%d=%d",d,d);
			if(d==1) printf("\n");
			for(e=d-1;e>=1;e--) 
			{
				printf("+%d",e);
				if((e==1)&&(b!=a)) printf("\n");
			}
		}
	}
	return 0;
}