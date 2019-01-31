#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,x,y;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d%d",&x,&y);
	for(i=0;i<=n;i++)
	{
		if(i==n){
		
		if(i<x)
		printf("%d",arr[i]);
		if(i==x)
		printf("%d",y);
		if(i>x)
		printf("%d",arr[i-1]);}
		else{
		
		if(i<x)
		printf("%d ",arr[i]);
		if(i==x)
		printf("%d ",y);
		if(i>x)
		printf("%d ",arr[i-1]);}
		
	}
	return 0;


 } 