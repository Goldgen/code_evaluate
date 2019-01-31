#include <stdio.h>
int main()
{
	int n,k=1,L=1,j=1;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=2*(n-i);j++)
		printf(" ");
		for(k=1;k<i;k++)
	    {
		printf("%d+",k);
	    }
	    printf("%d=",i);
	    for(L=i;L>1;L--)
	    printf("%d+",L);
	    if(i<n)
	    printf("%d\n",L);
	    else
	    printf("%d",L);
	}
	return 0;
}