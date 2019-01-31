#include<stdio.h>
#include<string.h>
int nu[100][100];
int main(){
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;;j++){
			if(j>1) printf(" ");
			if(nu[i-1][j]==0){
				printf("1");
				if(n!=i) printf("\n");
				nu[i][j]=1;
				break;
			}
			else {
				nu[i][j]=nu[i-1][j-1]+nu[i-1][j];
				printf("%d",nu[i][j]);
			}
		}
	}
	return 0;
} 