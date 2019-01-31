#include <stdio.h>
#include <stdlib.h>
int Min (int arr[ ], int n)
{
    if(n==1)
        return arr[n-1];
    if(arr[n-1]<arr[n-2])
        arr[n-2]=arr[n-1];
     return Min(arr,n-1);
}
 int Sum (int arr [ ], int n)
 {
     if(n==0)
        return 0;
     return arr[n-1]+Sum(arr,n-1);
 }
int main()
{
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i=0;i<n;i++)
        scanf("%d",&nums[i]);
    printf("%d %d",Min(nums,n),Sum(nums,n));
    return 0;
}