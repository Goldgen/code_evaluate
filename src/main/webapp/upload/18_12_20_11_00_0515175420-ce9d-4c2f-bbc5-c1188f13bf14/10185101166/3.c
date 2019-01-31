#include<stdio.h>
#include<string.h>
#include<limits.h>

int Sum(int *ptr , int n)
{
	int sum = 0;
	for(int i = 0;i < n;i++,ptr++)
	{
		sum += *ptr;
	}
	printf("%d",sum);
}


int Min(int *ptr, int n)
{

	int min = INT_MAX;
	for(int i = 0;i < n;i++,ptr++)
	{
		if(*ptr < min)
		min = *ptr;
	}
     printf("%d ",min);
}


int main()
{
	int n;
	scanf("%d",&n);
	int array[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&array[i]);
	}
	int *ptr = array;
	Min(ptr,n); 
	Sum(ptr,n);
}