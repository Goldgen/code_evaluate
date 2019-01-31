#include <stdio.h>

int main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	printf("{}\n");
	for(c=0;c<=n-1;c++)
	{
		printf("{%d}\n",c);
		for(b=c;b>0;b--)
		{
			for(a=0;a<b;a++)
			{
				printf("{%d,",a);
				for(i=b;i<c;i++) 
					printf("%d,",i);
				if(c==n-1&&b==1&&a==b-1) printf("%d}",c);
				else printf("%d}\n",c);
			}
		}
	}
	return 0; 
}