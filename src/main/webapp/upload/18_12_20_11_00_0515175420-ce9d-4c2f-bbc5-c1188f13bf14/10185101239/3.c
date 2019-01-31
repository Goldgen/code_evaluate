#include <stdio.h>
#include <stdlib.h>
int Min (int arr[ ],int n){
int m=arr[0],i;
for(i=0;i<n;i++)
m=arr[i]<m?arr[i]:m;
return m;

}
int Sum(int arr[],int n)

{
	return n==0?0:Sum(arr,n-1)+arr[n-1];

}
int main(){
    int n;
	scanf("%d",&n);
	int arr[10000];
	int j;
	for(j=0;j<n;j++){
	scanf("%d",&arr[j]);}
    printf("%d ",Min(arr,n));
    printf("%d",Sum(arr,n));
    return 0;
		  }
