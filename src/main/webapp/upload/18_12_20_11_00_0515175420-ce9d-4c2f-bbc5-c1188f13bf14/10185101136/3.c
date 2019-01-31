#include <stdio.h>
#include <stdlib.h>

int Min(int arr[], int k);
int Sum(int arr[], int k);

int main()
{
    int n;
    int array[105];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &array[i]);
    printf("%d %d", Min(array, n - 1), Sum(array, n - 1));
    return 0;
}
int Sum(int arr[], int k)
{
    if (k == 0)
        return arr[0];
    return arr[k] + Sum(arr, k - 1);
}
int Min(int arr[], int k)
{
    if (k == 0)
        return arr[0];
    int m = Min(arr, k - 1);
    return (arr[k] <= m) ? arr[k] : m;
}
