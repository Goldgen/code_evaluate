#include <stdio.h>
#include <stdlib.h>
int Min(int arr[],int n)
{
	if (n-1<0) return 0;
    if(arr[0]>arr[n-1]) arr[0]=arr[n-1];
    return Min(arr,n-1);
}

int Sum(int arr[],int n)
{
    //printf("%d %d\n",n,arr[n]);
    if (n==0) return arr[n];
    else return Sum(arr,n-1)+arr[n];
}

int main()
{
    int x,i;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=Sum(arr,x-1);
    Min(arr,x);
    printf("%d %d",arr[0],s);
    return 0;
}
