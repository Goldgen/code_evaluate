#include <stdio.h>
int main(){
	int i=0,temp=0;
	scanf("%d",&i);
	getchar();
	int a[10000]={0};
	for(int k=0;k<=i-1;k++){
		scanf("%d",&a[k]);
	}
	for(int j=i-1;j>=0;j--){
		for(int k=0;k<=j;k++){
			if(a[k]>a[j]){
			   temp=a[k];
			   a[k]=a[j];
			   a[j]=temp;
		    }
		}
	}
    for(int j=0;j<=i-2;j++){
    	printf("%d ",a[j]);
	}
	printf("%d",a[i-1]);
	return 0;
}