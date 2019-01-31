#include <stdio.h>
#include <string.h>

int Min (int arr[ ], int n);
int Sum (int arr[ ], int n);

int main()
{
	int n;
	scanf("%d",&n);
    int arr[100];
	int i;    
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}
	Min(arr,n);
	Sum(arr,n);
	printf("%d %d",Min(arr,n),Sum(arr,n)); 
    return 0;
}

int Min(int arr[],int n)
{	
    int *s=arr;
    if(n==1){
    	return arr[0];
	}
	*s=*s>Min(arr+1,n-1)?Min(arr+1,n-1):*s;
	return *s;
}

int Sum(int arr[],int n)
{
	int *a=arr;
	if(n==1){
		return *a;
	}
	return *a+Sum(arr+1,n-1);
}