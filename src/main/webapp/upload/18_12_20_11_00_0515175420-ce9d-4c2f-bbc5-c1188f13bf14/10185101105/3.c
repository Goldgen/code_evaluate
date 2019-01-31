#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Min (int arr[ ], int n);
int Sum (int arr [ ], int n);
int main() {
    int i,n,min,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=Min(arr,n);
    sum=Sum(arr,n);
    printf("%d %d",min,sum);
    return 0;
}
int Min (int arr[ ], int n)
{
    int min,j;
    min=arr[0];
    for(j=1;j<n;j++)
        if(min>arr[j])
            min=arr[j];
    return min;
}
int Sum (int arr [ ], int n)
{
    int sum=arr[0],k;
    for(k=1;k<n;k++)
        sum+=arr[k];
    return sum;
}

