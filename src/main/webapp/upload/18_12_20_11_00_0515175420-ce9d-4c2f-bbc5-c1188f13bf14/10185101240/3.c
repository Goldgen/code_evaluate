#include<stdio.h>
int Min(int arr[],int n)
{
	int min;
	min=arr[0];
	int i;
	int *p=arr;
	if(n==1)
		return arr[0];
	else{
    for (i=0;i<n; ++i)
    {
        if (*(p+i) < min)
            min = *(p+i);
    }
	}return min;
}
int Sum(int arr[],int n)
{
    int sum;
	int *p=arr;
	 for(p=arr;p<=&arr[n-1];p++){
        sum += *p;}
	return sum;
}
void main()
{
	int n;
	scanf("%d",&n);
	int arr[105];
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	printf("%d ",Min(arr,n));
	printf("%d",Sum(arr,n));
	return 0;
}
		
	
			