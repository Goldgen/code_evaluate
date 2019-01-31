#include<stdio.h>

int main(void)
{
	int n;
	int a = 1;
	int b = 1;
	int c = 1;
	int end;
	scanf("%d",&n);
	printf("1\n");
    for(int i = 1;i < n;i++)
	{
		printf("1");
		for(int j = 1;j <= i;j++)
		{
			a = 1;
			b = 1;
			c = 1;
			if(i==j&&i==n-1)
			    printf(" 1");
            else if(i==j&&i<n-1)
                printf(" 1\n");
			else
			{
				for(int m = 1;m <= i;m++)
					a*=m;
				for(int p = 1;p <= (i-j);p++)
					b*=p;
				for(int o = 1;o <= j;o++)
					c*=o;
				end=a/(b*c);
				printf(" %d",end);
			}
		}
	}
	return 0;
}
