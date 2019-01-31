#include<stdio.h>
#include<math.h> 
#include<string.h>
int main()
{
	int data[100],data2[100];
	int n=0,a=0,b=0,i=0,j=0,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
		data2[i] = data[i];
	}
	scanf("%d%d",&a,&b);
	data[a] = b;
	for(j=a+1;j<=n;j++)
		data[j]=data2[j-1];
	printf("%d",data[0]);
	for(k=1;k<=n;k++)
		printf(" %d",data[k]);
	return 0;
}