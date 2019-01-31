#include <stdio.h>
#define SIZE 100
int min(int * arr, int n)
{
	int min = arr[0];
	for(int i = 1; i < n; i++)
        if(min > arr[i])
        min = arr[i];
    return min;
}
int sum(int * arr, int n)
{
    int sum = 0;
    for(int i = 0 ; i < n; i++)
        sum += arr[i];
    return sum;
}
int main()
{
	int n, arr[SIZE] = {0};
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("%d %d", min(arr, n), sum(arr, n));
}