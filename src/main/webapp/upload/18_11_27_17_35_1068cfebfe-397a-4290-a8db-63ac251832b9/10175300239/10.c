#include <stdio.h>

void bubbleSort(int arr[],int len);
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(k=0;k<n;k++)
        scanf("%d",&a[k]);
    bubbleSort(a,n);
    for(k=0;k<n-1;k++)
        printf("%d ",a[k]);
    printf("%d",a[k]);
    return 0;
}

void bubbleSort(int arr[],int len){
    int i,j,temp;
    for(i=len-1;i>0;i--){
        for(j=len-1;j>len-i-1;j--)
            if(arr[j]<arr[j-1]){
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
    }
    return;
}
