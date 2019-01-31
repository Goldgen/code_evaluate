#include <stdio.h>
int main(){
	int i=0,del,all=0,b[10000]={0};
	scanf("%d",&i);
	getchar();
	int a[10000]={0};
	for(int k=0;k<=i-1;k++){
		scanf("%d",&a[k]);
	}
	getchar();
	scanf("%d",&del);
	for(int j=0;j<=i-1;j++){
		if(a[j]==del){
		   b[all]=j;
		   all++;
		}
		if(j==i-1&&a[j]!=del&&all==0){
			printf("ERROR");
			return 0;
		}		
	}
	for(int j=0;j<=all-1;j++){
		if(j<all-1)
		printf("%d ",b[j]);
		if(j==all-1)
		printf("%d",b[j]);
	}
	return 0;
}