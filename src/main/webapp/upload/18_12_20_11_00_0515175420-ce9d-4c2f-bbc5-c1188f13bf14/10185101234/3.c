#include <stdio.h>
#include <stdlib.h>
int Min(int arr[],int n)
{
    if(n==1)
        return arr[0];
    else
    {
        if(Min(arr,n-1)<arr[n-1])
          return Min(arr,n-1);
        else
          return arr[n-1];
    }
}
int Sum(int arr[],int n)
{
    if(n==1){
        return arr[0];
    }
    else{
        return (Sum(arr,n-1)+arr[n-1]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("%d %d",Min(array,n),Sum(array,n));
}
