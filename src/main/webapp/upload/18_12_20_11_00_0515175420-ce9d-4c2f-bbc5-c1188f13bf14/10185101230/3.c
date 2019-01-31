#include <stdio.h>
#include <stdlib.h>
int Min (int arr[ ], int n){
int min;
int *ptr;
min=*(arr+0);
for(ptr=arr+1;ptr<arr+n;ptr++)
    if(min>*ptr)
        min=*ptr;
return(min);
}
int Sum (int arr[ ],int n){
 return n==0?0:Sum(arr,n-1)+arr[n-1];
}
int main()
{
    int x;
    int i;
    scanf("%d",&x);
    int ar[1000];
    for(i=0;i<x;i++)
        scanf("%d",&ar[i]);
    printf("%d",Min(ar,x));
    printf(" ");
    printf("%d",Sum(ar,x));
    return 0;
}
