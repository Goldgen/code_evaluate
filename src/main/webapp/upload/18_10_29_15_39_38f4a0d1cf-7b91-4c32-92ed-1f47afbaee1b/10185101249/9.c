#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    printf("1");
    for(i=1;i<n;i++)
    {
    	k=1;
    	printf("\n1");
		for(j=0;j<i;j++)
    	{
    		k=k*(i-j)/(j+1);
    		printf(" %d",k);
		}
	}
    return 0;
}
