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
	for(i=0;i<=n-1;i++)
	{
		if(arr[i]==x){
			for(j=0;j<=n-1;j++)
			{
			if(j==i)
			continue;
			if(j<n-1)
			printf("%d ",arr[j]);
			else
			printf("%d",arr[j]);
			
}
		
		flag=1;
		break;}
		
	}
	if(flag=0)
	printf("ERROR");
	
	
	
	return 0;


 } 