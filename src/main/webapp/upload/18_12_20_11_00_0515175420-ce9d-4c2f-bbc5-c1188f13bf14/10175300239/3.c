#include <stdio.h>
#include <stdlib.h>

int Min (int arr[ ], int n);
int Sum (int arr [ ], int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    int array[100];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("%d %d",Min(array,n),Sum(array,n));
    return 0;
}
int Min (int arr[ ], int n){
    /*int i;
    int min=arr[0];
    for(i=1;i<n;i++){
        if(min>arr[i])
            min=arr[i];
    }
    return min;*/
    if(n==1)
        return arr[0];
    else if(n==2)
        return arr[0]<arr[1]?arr[0]:arr[1];
    int min;
    min=Min(arr+1,n-1);
    return arr[0]<min?arr[0]:min;
}
int Sum (int arr [ ], int n){
    if(n==1)
        return arr[0];
    else if(n==2)
        return arr[0]+arr[1];
    return arr[0]+Sum(arr+1,n-1);
}
