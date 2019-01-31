#include <stdio.h>
#include <stdlib.h>

int Sum(int arr[],int n){
    static int sum=0,i=0;
    for(;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int Min(int arr[],int n){
    int i=0;
    int min=arr[i];
    for(;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    return min;
}

int main()
{
    int n,i=0;
    int arr[100]={0};
    scanf("%d",&n);
    for(;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",Min(arr,n),Sum(arr,n));
    return 0;
}
