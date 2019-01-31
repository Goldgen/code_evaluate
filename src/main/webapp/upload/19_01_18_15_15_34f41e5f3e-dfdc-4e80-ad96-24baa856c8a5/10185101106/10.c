#include <stdio.h>
int main()
{
	int n = 0;
	int i,j;
	scanf("%d",&n);
	int bound = 1 << n;
	for (i = 0 ; i < bound ; ++i)
	{
		printf("{");
		int k = 0;
		int t = i;
		while(t)
		{
			k += t&1;	
			t>>=1;
		}
		for (j = 0 ; j < n ; ++j)
		{
			int sb = (1<<j) & i;
			if(sb)
			{
				printf("%d",j);
				k--;
				if(k)
					printf(",");
			}
		}

		printf("}");
		if(i != bound-1)
			printf("\n");	
	}	
} 