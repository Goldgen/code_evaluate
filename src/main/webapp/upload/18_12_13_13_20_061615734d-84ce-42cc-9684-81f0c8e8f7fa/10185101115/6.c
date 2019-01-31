#include <stdio.h>
#include <string.h>

void rotate(int*,int,int);

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int p[n];
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	} 
	rotate(p,n,m);
	return 0;
}

void rotate(int* p,int n,int m)
{
	int arr[m],brr[n-m];
	for(int i=0,k=n-m;i<m,k<n;i++,k++){
		arr[i]=p[k];
	}
	for(int i=0;i<n-m;i++){
		brr[i]=p[i];
	}
	for(int i=0;i<m;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<n-m;i++){
		if(i==n-m-1){
			printf("%d",brr[i]);
		}
		else{
			printf("%d ",brr[i]);
		}
		
	}
}