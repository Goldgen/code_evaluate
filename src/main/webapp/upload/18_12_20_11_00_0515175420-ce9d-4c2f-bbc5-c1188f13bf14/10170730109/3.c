#include <stdio.h>
#include <limits.h>
int Min (int arr[ ], int n){
    static int min=INT_MAX;
    if(n>0){
        if(*arr<min){
            min=*arr;
        }
        arr++;
        n--;
        Min(arr,n);
    }
    return min;
}
int Sum (int arr [ ], int n){
    int* x=arr;
    static int sum=0;
    if(n>1){
        sum+=*x;
        n--;
        Sum(++x,n);
    }else{
        sum+=*x;
    }
    return sum;
}
int main(void){
    int n=0,i=0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    printf("%d %d",Min(num,n),Sum(num,n));
    return 0;
}


