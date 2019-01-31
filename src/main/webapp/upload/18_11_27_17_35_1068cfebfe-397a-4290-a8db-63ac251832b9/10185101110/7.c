#include<stdio.h>
#include<math.h>
int main()
{
	int flag=0,n,i,x,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	j=0;
	for(i=0;i<=n-1;i++)
	{
		if(arr[i]==x)
		{
		if(j==0){
		
		printf("%d",i);
		j++;
		flag=1;}
		else
		printf(" %d",i);
		
	}}
	if(flag==0)
	printf("ERROR");
	return 0;


 } 