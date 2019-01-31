#include<stdio.h>

int main(void)
{
	int m,n;
	int a;
	scanf("%d",&a);
	for(m=0;m<(a+1)/2;++m)
	{
		for(n=0;n<a;++n)
		{
			if((m+n==(a-1)/2) || (n-m==(a-1)/2)||m==(a-1)/2)
			  printf("*");
			else if((n-m)<(a-1)/2)
			  printf(" ");
		}
		if(m!=(a-1)/2)
		  printf("\n");
		
	}
	return 0;
	
}