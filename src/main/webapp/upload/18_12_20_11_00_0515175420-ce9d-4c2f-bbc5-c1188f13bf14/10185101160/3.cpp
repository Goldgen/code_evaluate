#include<stdio.h>
#include<string.h>
int Min (int arr[ ], int n); 
int Sum (int arr[ ], int n);
int main()
{
	int m  = 0,i = 0;
	int number[101];
	scanf("%d",&m);
	for(i = 0;i < m;i ++)
		scanf("%d",&number[i]);
	printf("%d %d",Min(number,m),Sum(number,m));
	return 0;
}
int Min (int arr[ ], int n)
{
	static int min = arr[0];
	if( min > arr[n-1])
		min = arr[n-1];
	if(n > 1)
		Min(arr,n-1);
	return min;
}
int Sum (int arr[ ], int n)
{
	static int sum = 0;
	sum += arr[n-1];
	if(n > 1)
		Sum(arr,n-1);
	return sum;
}