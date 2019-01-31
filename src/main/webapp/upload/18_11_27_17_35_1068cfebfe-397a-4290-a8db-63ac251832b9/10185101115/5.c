#include <stdio.h>

int main()
{int n;
int data[10000];
int num,key;
scanf("%d",&n);
for(int i=0;i<n;i++){
	scanf("%d",&data[i]);
}
scanf("%d",&num);
scanf("%d",&key); 
int arr[n+1];
for(int i=0;i<n+1;i++){
	if(i>num){
		arr[i]=data[i-1];
	}
	else if(i<num){
		arr[i]=data[i];
	}
	else if(i==num){
		arr[i]=key;
	}	
}
for(int k=0;k<n+1;k++){
	if(k!=n){
	printf("%d ",arr[k]);
	}
	else{
		printf("%d",arr[k]);
	}
	
}
}
