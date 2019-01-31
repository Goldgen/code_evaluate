#include <stdio.h>

int main(){
    int t,n,temp;
    scanf("%d",&t);
    int arr[t];
    for (int i=0;i<t;i++)
    {
    	scanf("%d",&n);
    	arr[i]=n;
	}
    for (int i=0;i<t-1;i++)
	{
		for (int j=0;j<t-i-1;j++)
		{
		if(arr[j]>arr[j+1])
		{
		temp=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=temp;
	    }
	    }
    }
    printf("%d",arr[0]);
    for (int i=1;i<t;i++)
    {
    	printf(" %d",arr[i]); 
	}
    return 0;
}