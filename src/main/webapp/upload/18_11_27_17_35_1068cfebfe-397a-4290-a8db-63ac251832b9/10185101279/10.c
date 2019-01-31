#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
void passcount(int arr[],int i,int n);
int main(){
    int n;
    scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(int i=n-1;i>0;i--){
    passcount(a,0,i);
   }
   for(int x=0;x<=n-1;x++){
        if(x<n-1)
    printf("%d ",a[x]);
   else
    printf("%d",a[x]);
    }
	return 0;
}
void passcount(int arr[],int i,int n){
    int temp;
for(int j=i;j<n;j++){
    if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
}
}
