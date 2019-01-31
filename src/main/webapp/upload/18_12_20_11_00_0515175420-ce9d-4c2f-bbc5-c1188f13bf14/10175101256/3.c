#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Min(int arr[ ],int x, int n);
int Sum(int arr [ ], int n);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=Min(a,a[0],n);
    int sum=Sum(a,n);
    printf("%d %d",min,sum);
}
int Min (int arr[ ], int x,int n){
    int *p=arr;
    if(x>*p)
        x=*p;
    if(n>1)
    Min(p+1,x,n-1);
    else
        return x;
}
int Sum(int arr [ ], int n){
    int *p=arr;
    if(n>1)
    return *p+Sum(p+1,n-1);
    return *p;
}
