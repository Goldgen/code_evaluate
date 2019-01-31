#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	int i,j,k,t,k1,t1;
	scanf("%d",&n);
	printf("{}\n");
	for(i=1;i<=n;i++)
	{
		for(j=pow(2,i-1);j<=(pow(2,i)-1);j++)
		{
			printf("{");
			for(k=0;k<=(i-1);k++)
			{
				k1=1<<k;
				t=j&k1;
				t1=t>>k;
			    if(t1==1&&k!=i-1)
				    printf("%d,",k);
				else if(k==i-1)
					printf("%d",k);
				else
					continue;
			}
			if(i==n&&j==(pow(2,n)-1))
				printf("}");
			else
				printf("}\n");
		}

	}
}