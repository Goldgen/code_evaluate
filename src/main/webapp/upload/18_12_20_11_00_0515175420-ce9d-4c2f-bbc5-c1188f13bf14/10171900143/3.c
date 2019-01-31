#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int Min (int arr[ ], int n); int Sum (int arr [ ], int n);

int main()
{
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=Min(a,n);
    int s=Sum(a,n);
    printf("%d %d",min,s);
    return 0;
}

int Min (int arr[ ], int n){
    if(n==1)return *arr;
    //if(n==2)return *(arr+1)<*arr?*(arr+1):*arr;
    return Min(arr,n/2)<Min(arr+n/2,n-n/2)?Min(arr,n/2):Min(arr+n/2,n-n/2);
}

int Sum (int arr [ ], int n){

    if(n==1)return *arr;
    return Sum(arr,n/2)+Sum(arr+n/2,n-n/2);
}
