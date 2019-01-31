#include<stdio.h>
#include<stdlib.h>
int Min (int arr[ ], int n){
	if(n){
		int min=Min(arr,n-1);
		return arr[n]<min?arr[n]:min;
	} 
	return arr[0];
}
int Sum (int arr [ ], int n){
	if(n) return arr[n]+Sum(arr,n-1);
	return arr[0];
}
int main(){
	int arr[200]={},n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	printf("%d %d",Min(arr,n-1),Sum(arr,n-1));
	return 0;
} 