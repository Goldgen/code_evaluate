#include <stdio.h>
#include <string.h>

int Min (int arr[],int n){
	int j=n;
	if(j>0){
	arr[0]=(arr[0]<arr[j])?arr[0]:arr[j];
	Min(arr,n-1);
	}
	return arr[0];
}
int Sum (int arr[], int n){
	static int add=0;
	if (n<0)
	return add;
	Sum(arr,n-1);
	add+=arr[n];
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[110]={0};
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	n--;
	printf("%d %d",Min(arr,n),Sum(arr,n));
    return 0;
}
