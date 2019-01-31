#include <stdio.h>
#include <stdlib.h>
int Min(int arr[], int n);
int Sum(int arr[], int n);

int main()
{
    int n, i;
    scanf("%d",&n); getchar();
    int arr[500] = {0};
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("%d %d", Min(arr, n), Sum(arr, n));

    return 0;
}

int Min(int arr[], int n)
{
    if (n==1)
        return arr[n-1];
    int temp = Min(arr, n-1);
    return arr[n-1]<temp ? arr[n-1] : temp;
}

int Sum(int arr[], int n)
{
    if (n==1)
        return arr[n-1];
    return arr[n-1]+Sum(arr, n-1);
}
