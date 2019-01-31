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
	printf("%d ",Min(arr,n));
	printf("%d",Sum(arr,n));
	return 0;
	
	
 } 
 int Min (int arr[ ], int n)
 {
 	int a = arr[0];
 	for(int i = 0;i < n;i++)
 	{
 		if(a > arr[i])
 		a = arr[i];
	 }
	 return a;
 
 }
 int Sum (int arr [ ], int n)
 {
 	int a = 0;
  for(int i = 0; i < n;i++)
  {
  	a = a + arr[i];
  }
  return a;
 }
