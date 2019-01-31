#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i==1){
			for(int j=1;j<=n;j++)
				printf("*");
			printf("\n");
		}
		else if(i==n){
			for(int j=1;j<=n;j++)
				printf("*");
		}
		else{
			printf("*");
			for(int j=2;j<=n-1;j++)
				printf(" ");
			printf("*");
			printf("\n");
		}
	}
	return 0;
}
