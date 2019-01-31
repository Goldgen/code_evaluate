#include <stdio.h>
int min(int array[],int m){
	if(m==0){
		return array[0];
	}
	else if(array[m-1]<array[0]){
		array[0]=array[m-1];
		return min(array,m-1);
	}
	return min(array,m-1);
}
int sum(int array[],int m){
	if(m==0){
		return 0;
	}
	return sum(array,m-1)+array[m-1];
}
int main(){
	int n,num[200]={0};
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	printf("%d %d",min(num,n),sum(num,n));	 
} 