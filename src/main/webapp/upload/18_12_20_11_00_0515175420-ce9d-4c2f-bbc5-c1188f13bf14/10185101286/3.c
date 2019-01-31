#include<stdio.h>
#include<string.h>
int Min(int arr[], int n);
int Sum(int arr[], int n);
int main()
{
    int n=0;
    int i,sum;
    int min=0;
    int array[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&array[i]);
    }
    Min(array,n);
    min=array[0];
    printf("%d ",min);
    sum=Sum(array,n);
    printf("%d",sum);
    return 0;
}
int Min(int arr[], int n)
{
    if(n-1>0)
    {
    int parr=arr[n-1];
    if(arr[n-1]<arr[n-2])
    {
        arr[n-1]=arr[n-2];
        arr[n-2]=parr;
    }
    --n;
    Min(arr,n);
    }
    else return ;
}
int Sum(int arr[], int n)
{
    static int sum=0;
    sum+=arr[n-1];
    if(n-1>0)
    {
        n--;
        Sum(arr,n);
    }
    else return sum;
}

