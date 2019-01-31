#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n][n];
    printf("1\n");
    num[1][0]=1;
    num[1][1]=1;
    printf("1 1");
    if(n>2)
    	printf("\n");
    for(i=2;i<n;i++)
    {
    	num[i][0]=1;
    	num[i][i]=1;
    	for(int j=1;j<i;j++)
    		num[i][j]=num[i-1][j-1]+num[i-1][j];
    }
    for(i=2;i<(n-1);i++)
    {
    	for(int j=0;j<i;j++)
    		printf("%d ",num[i][j]);
    	printf("%d\n",num[i][i]);
    }
    if(n>2)
    {
    	for(int j=0;j<(n-1);j++)
    		printf("%d ",num[n-1][j]);
        printf("%d",num[n-1][n-1]);
    }
}
