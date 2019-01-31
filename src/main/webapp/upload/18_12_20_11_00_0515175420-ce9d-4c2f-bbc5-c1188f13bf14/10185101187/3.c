#include <stdio.h>

int Min(int arr[], int n)
{
    int i;
    int x=arr[0];
    for(i=0; i<n; i++)
        if(arr[i]<x)
            x = arr[i];
    return x;
}

int Sum(int arr[], int n)
{
    int y=0, i;
    for(i=0; i<n; i++)
        y = y+arr[i];
    return y;
}


int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("%d %d", Min(arr, n), Sum(arr, n));
}
