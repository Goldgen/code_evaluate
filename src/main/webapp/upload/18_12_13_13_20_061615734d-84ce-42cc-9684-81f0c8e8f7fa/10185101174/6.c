#include <stdio.h>
#include <stdlib.h>
int* change(int* ,int,int);
int main()
{
    int arr[12];
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    change(arr,n,m);
    for(int i=0; i<n; i++){
        if(i==n-1)
            printf("%d",arr[i]);
        else
            printf("%d ",arr[i]);
    }
}
int* change(int* arr,int n,int m){
    int reverse[12];
    for(int i=0; i<m; i++){
        reverse[i]=*(arr+n-m+i);
    }
    for(int j=0; j<n-m; j++){
        *(arr+n-1-j)=*(arr+n-m-1-j);
    }
    for(int k=0; k<m; k++){
        *(arr+k)=reverse[k];
    }
    return arr;
}

