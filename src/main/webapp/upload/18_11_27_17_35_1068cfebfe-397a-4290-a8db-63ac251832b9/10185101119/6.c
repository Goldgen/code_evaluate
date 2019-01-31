#include <stdio.h>
int main(){
	int i=0,del=0,n=0;
	scanf("%d",&i);
	getchar();
	int a[1000]={0};
	for(int k=0;k<=i-1;k++){
		scanf("%d",&a[k]);
	}
	getchar();
	scanf("%d",&del);
	for(int j=0;j<=i-1;j++){
		if(a[j]==del){
			n=j;
			break;
		}
		if(j==i-1){
			printf("ERROR");
			return 0;
		}
	}
	for(int j=0;j<=i-2;j++){
		if(j==0&&n!=0)
		printf("%d",a[j]);
		else if(j==0&&n==0)
		printf("%d",a[j+1]);
		else if(j<n&&j!=0)
		printf(" %d",a[j]);
		else if(j>=n&&j!=0)
		printf(" %d",a[j+1]);
	}
	return 0;
}