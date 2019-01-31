#include<stdio.h>
int Min (int arr[ ], int n);
int Sum (int arr [ ], int n);
int main()
{
	int n;

	scanf("%d",&n);	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("%d ",Min(arr,n-1));
	printf("%d",Sum(arr,n-1));
	return 0;
	
	
 } 
 int Min (int arr[ ], int n)
 {
 	if(n<=0)
 	return arr[0];
 	else
 	return arr[n]<=Min(arr,n-1)? arr[n]:Min(arr,n-1);
 
 }
 int Sum (int arr [ ], int n)
 {
 return n<=0? arr[0]:Sum(arr,n-1)+arr[n];
 }