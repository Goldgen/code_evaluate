#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i==1||i==2){
			for(int j=1;j<=i;j++)
				printf("*");
			printf("\n");
			continue;
		}
		else if(i==n){
			for(int j=1;j<=i;j++)
				printf("*");
		}
		else{
			printf("*");
			for(int j=2;j<=i-1;j++)
				printf(" ");
			printf("*");
			printf("\n");
		}
	}
	return 0;
}
