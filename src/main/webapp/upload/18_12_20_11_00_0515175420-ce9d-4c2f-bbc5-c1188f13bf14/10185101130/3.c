#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Min(int arr[],int n);
int Sum(int arr[],int n);
int array[100];
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("%d %d",Min(array,n),Sum(array,n));
    return 0;
}

int Min(int arr[],int n)
{
    int i;
    if(n <= 1)
        return arr[0];
    else
    {
        i = Min(arr,n-1);
        return arr[n-1] > i ? i : arr[n-1];
    }
}

int Sum(int arr[],int n)
{
    if(n == 0)
        return arr[0];
    else
        return arr[n]+Sum(arr,n-1);
}
