#include <stdio.h>
#include <stdlib.h>

int sum(int a[],int n){//递归求整
	if(n==1){
		return a[0];
	}
	else{
		return (sum(a,n-1)+a[n-1]);
	}
}

int MinValue(int a[],int n){//递归求最小值
	if(n==1){
		return a[0];
	}
	else{
		if(MinValue(a,n-1)<a[n-1]){
			return MinValue(a,n-1);
		}
		else{
			return a[n-1];
		}
	}
}

int main(){
	int a[100];
	int n, sumer, min;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
	}
	sumer=sum(a,n);
	min=MinValue(a,n);
	printf("%d %d", min, sumer);
}
