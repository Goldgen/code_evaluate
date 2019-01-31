#include <stdio.h>
#include <stdlib.h>
int Min(int arr[],int n);
int Sum(int arr[],int n);
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)scanf("%d",array+i);
    printf("%d %d",Min(array,n),Sum(array,n));
    return 0;
}
int Min(int arr[],int n)
{
    if(n==1)return arr[0];
    int m=Min(arr,n-1);
    if(arr[n-1]<m)return arr[n-1];
    return m;

}
int Sum(int arr[],int n)
{
    if(n==0)return 0;
    return Sum(arr,n-1)+arr[n-1];
}

